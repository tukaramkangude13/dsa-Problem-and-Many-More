#include<stdio.h>

int partition( int arr[],int s,int e){
int pivotindex=s;
int pivotelement=arr[s];
int count=0;
for (int i = s+1 ; i <= e; i++)
{
if(arr[i]<=pivotelement){
    count++;

} }

 int rightindex=count+s;

int temp=arr[pivotindex];
arr[pivotindex]=arr[rightindex];
arr[rightindex]=temp;
int i=s;
int j=e;
 pivotindex=rightindex;
while (i<pivotindex&& j>pivotindex)

{

    while (arr[i]<=pivotelement)
    {
    i++;
    }
    while (arr[j]>pivotelement)
    {
        j--;
    }
    if (i<pivotindex && j>pivotindex)
    {
        
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;

            }
    
    return pivotindex;
    
}




}


 void quicksort(int arr[],int s,int e){
    if(s >= e)
    return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
    return;
}
int main(){
    int arr[]={1,5,3,4,8,2,7};
    int n=7;
    int e=n-1;
    int s=0;
     for (int i = 0; i <  n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    quicksort(arr,s,e);
    for (int i = 0; i <  n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}