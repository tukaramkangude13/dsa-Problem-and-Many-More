#include<iostream>
using namespace std; 
void merge(int * arr,int s, int e){
int mid=(s+e)/2;
int len1=mid-s+1;
int len2=e-mid;
//assume to create arryas for len1,len2,length
int* left=new int [len1];//+
int* right=new int [len2];
//copy values
int k=s;
for (int i = 0; i < len1; i++)
{
left[i]=arr[k];
k++;
    
}
//right
k=mid+1;
for (int i = 0; i < len2; i++)
{
right[i]=arr[k];
k++;
     
}
// mergge logic
int li=0;
int ri=0;
int mi=s;
while (li<len1 && ri< len2 )
{
       if(left[li]< right[ri])
       {
arr[mi++]=left[li++];
      } 
else{
 arr[mi++]=right[ri++];
}
}
// copy logic for the left array 
while (li < len1)
{
 arr[mi++] =left[li++];  
}
// copy logic for the right array-

while ( ri < len2)
{
 arr[mi++] =right[ri++];  
}


} 


 void mergesort(int* arr,int s,int e){
    //base case 
    if(s>= e ){
        return;
    }
    int mid=(s+e)/2;
    //right part
    mergesort(arr,s,mid);
    //left part
    mergesort(arr,mid+1,e);

    //merging two array
     merge(arr,s,e);
     
}
int main()
{
int arr[]={ 4,5,13,6,9,6,1,0,2,12};
int n=10;
int s=0;
int e=n-1;
mergesort(arr,s,e);
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
}