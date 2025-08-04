#include<stdio.h>
 int binaryserach(int arr[],int s,int e,int key){
  
  while (s<=e)
  {

  int mid=s+(e-s)/2;
  
  if (arr[mid]==key)

  {
return mid+1; 
 }
  else if (key>arr[mid])
  {
    s=mid+1;
  }
  else 
  {
    e=mid-1;
      }
  
 }

return -1;

 }
int main()
{
    int arr[]={1,5,6,7,8,9,12,15,17,18,19};
    int s=0;
    int n=11;
    int e=n-1;
    int key=100;
   int result= binaryserach(arr,s,e,key);
if (result !=-1)
{
printf(" key is present in the array");
}
else
printf("key not present in the array");

    return 0;
}