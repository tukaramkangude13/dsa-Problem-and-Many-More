#include<stdio.h>
 int binarysearch(int arr[],int s,int e,int key){
    while (s<=e)
    
    {
int mid=s+(e-s)/2;
if (arr[mid]==key)
{
return mid+1;
}
else if(key>arr[mid])
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
void bubblesort(int arr[],int s,int e){
    int i,j;
for ( i = 1; i <=e; i++)
{for ( j = 0; j <  e-i-1; i++)
{
    if (arr[j]>arr[i])
    {
     int temp=arr[j];
     arr[j]=arr[i];
     arr[i]=temp;
    }

    
}


}
return;

}
int main()
{
     int n;
     printf("how much you want to insert number in the array");
     scanf("%d",%n);
     int arr[n];
     int i;
     int key=5;
     printf("please enter the %d eleemt ",n);
     for ( i = 0; i < n; i++)
     {
    scanf("%d",&arr[i]);
     }
     int s=0;
     int e=n-1;
     bubblesort(arr,s,e);
     int result=binarysearch(arr,s,e,key);
if (result!=-1)

{
        printf("%d is present on the array",key);
}
else{
    printf("%d is not present in the array",key);
}
return 0;


     
}