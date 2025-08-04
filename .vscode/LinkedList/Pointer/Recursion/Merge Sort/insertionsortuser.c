#include<stdio.h>
void insertionsort(int arr[],int count)
{
    for (int  i = 1; i < count; i++)
    {
        int key=arr[i];
        int j=i-1;
        
        while (j>=0&& arr[j]>key)

        {
            arr[j+1]=arr[j];
        j=j-1;
        }
        arr[j+1]=key;

        
    }
    
}
int main()
{
    int n;
 printf("enter the number");
 scanf("%d",&n);
 int arr[n];
 for (int  i = 0; i < n; i++)
 {
    scanf("%d",&arr[i]);
 }
   insertionsort(arr,n);
   for (int i = 0; i < n; i++)
   {
printf("%d ",arr[i]);
   }
   
 
}