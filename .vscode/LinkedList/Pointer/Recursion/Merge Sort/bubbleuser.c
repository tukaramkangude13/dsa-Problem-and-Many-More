#include<stdio.h>
void bublesort(int arr[],int  count){

    for (int i = 0; i < count; i++)
    {
    for ( int j = 0; j < count-i-1; j++)
    {
    if (arr[j]>arr[j+1])
    {
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    
    }
    
    }
    
}
int main()
{
     int n;
     
     printf("howm much you ant to enter the number in array");
     scanf("%d",&n);
int arr[n];
    for (int i = 0; i <  n; i++)
    {
    scanf("%d",&arr[i]);
    }

    bublesort(arr,n);
    for (int i = 0; i <  n; i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;
    
     
}