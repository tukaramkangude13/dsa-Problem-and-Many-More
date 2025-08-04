#include<stdio.h>


void bubblesort(int arr[],int n)
{
    for (int i = 0; i <n-1; i++)
    {
        for (int j= 0; j <n-i-1; j++)
        {
         if(arr[j]>arr[j+1])
         {
          int swap=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=swap;

         }
        }
        
        
    }
   return; 
}
void printarray(int arr[],int n)
{
    int i=0;
    for (i = 0; i < n; i++)
    {
        printf("%d \n ",arr[i]);
    }
    return;
    
}
int main()
{

    int arr[]={10,15,4,8,17,13};
    int n=sizeof(arr) / sizeof(arr[0]);
    printf("orignal array:");
    printarray(arr,n);
    bubblesort(arr,n);
    printf(" after using buuble sort:");
    printarray(arr,n);
return 0;
}