#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivotindex=s;
    int pivotelement=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotelement)
        {
            count++;
        }
    }
    int rightindex=s+count;
    swap(arr[pivotindex],arr[rightindex]);

    
    pivotindex=rightindex; 
    int i=s;
    int j=e;
    while (i<pivotindex&&j>pivotindex)
    {
    while (arr[i]<= pivotelement)
    {
        /* code */i++;
    }
    while (arr[j]>pivotelement)
    {
        /* code */j--;
    }
    if(i<pivotindex&&j>pivotindex){
        swap(arr[i],arr[j]);
    }
    return pivotindex;
    } 
}
 void quicksort(int arr[],int s,int e)
    {
        if(s>=e)
        return ;
        int p= partition(arr,s,e);
        quicksort(arr,s,p-1);
        quicksort(arr,p+1,e);
    }
int main()
{
        int arr[]={8,1,3,4,20,50,30};
    int n=7;
    int e=n-1;
    int s=0;
    quicksort(arr, s, e );
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}