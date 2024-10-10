#include<stdio.h>

void insertionsort(int arr[],int s)
{
    for (int  i = 1; i < s; i++)
    {
    int key=arr[i];
     int j=i-1;
 while (j>=0 && arr[j]>key)
 {
    arr[j+1]=arr[j];
    j=j-1;
 }
 arr[j+1]=key;
 
    }
}
void printing(int arr[],int s)
{
    for (int i = 0; i < s; i++)
    {
    printf(" %d ",arr[i]);
    }
    
    
}
int  main()
{

    int arr[]={4,3,9,45,7,3,8};
    int s=sizeof(arr)/ sizeof(arr[0]);
    printing(arr,s);

}