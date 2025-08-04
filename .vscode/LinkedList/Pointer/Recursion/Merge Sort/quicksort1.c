#include<stdio.h>
int partition(int  arr[],int s,int e){
    int pivotelement=arr[s];
    int pivotindex=s;
    int count=0;
    for ( int i = s+1; i < e; i++)
    {
    if (arr[i]<=pivotelement)
    {
        count++;


    
    }
    
}
   int rightindex=count+s;
    
    int temp=arr[rightindex];
    arr[rightindex]=arr[pivotindex];
    arr[pivotindex]= temp;

  pivotindex=rightindex;
 int i=s;
 int j=e;
 while(i < pivotindex && j > pivotindex){
    if(arr[i]<=pivotelement)
  {  i++;}
  if (arr[i]> pivotelement)
  {
    j--;
  }
  if(i<pivotindex && j>pivotindex){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }
  

 }


return pivotindex;


      }   
   
 void quicksort(int arr[],int s,int e){
if (s>=e) return;

int p=partition(arr,s,e);
quicksort(arr,s,p-1);
quicksort(arr,p+1,e);


 }
 int main()
 {

    int arr[]={5,8,14,32,26,14,57};
    int n=7;
    int s=0;
    int e=7;
      for (int i = 0; i < n; i++)
      {
        printf("%d ",arr[i]);
      }
      quicksort(arr,s,e);
      printf("\n");
       for(int i = 0; i < n; i++)
      {
        printf("%d ",arr[i]);
      }
      
 }