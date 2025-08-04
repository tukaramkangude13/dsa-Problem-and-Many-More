#include<stdio.h>
bubble(int arr[],int count){
    for (int i = 0; i < count; i++)
    {
    for ( int  j = 0; j < count-i-1; j++)
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
    int arr[]={10,20,35,23,12};
    int count=sizeof(arr)/sizeof(arr[0]);
     bubble(arr,count);
     for (int i = 0; i < count; i++)
     {
printf("%d ",arr[i]);
     }
     return 0;
     
}