#include<stdio.h>
 void merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int left[10];
    int right[10];
    // assume that craete the array
   for (int i = 0; i < len1; i++) {
        left [i] = arr[s + i];   
    }

    // Copy values into the right array
    for (int i = 0; i < len2; i++) {
         right[i] = arr[mid + 1 + i];
    }
    

 // merge logic
 int mi=s;
 int li=0;
 int ri=0;
 while (li<len1 && ri<len2)
 {
if(left[li] < right[ri])
{
 arr[mi++]=left[li++];
}
else{
    arr[mi++]=right[ri++];
}
}
while (li < len1)
{
    arr[mi++]=left[li++];
}
while (ri < len1)
{
arr[mi++]=right[ri++];
}

 
 

 }
 void mergesort(int arr[],int s,int e){
    if(s>=e) return;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
 }
int main()
{
    int arr[]={3,1,5,4,8,9,7};
    int e=6;
    int s=0;
    mergesort(arr,s,e);
    for (int i = 0; i <=e; i++)
    {
    printf("%d ",arr[i]);
    }
    
return 0 ;
}