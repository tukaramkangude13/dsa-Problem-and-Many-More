#include<stdio.h>
 void linearsearch(int arr[], int s, int e,int key){
    int i;
    for (  i = 0; i <=e; i++)
    {
     if (arr[i]==key)
     {
        printf("%d is the present in the array%d",key,i+1);
        return;
     }
     
    }
    printf("key is not present int he array");
    return;
    
 }
int main()
{

    int n;
     printf(" hoe=w much you want to the number in the array");
     scanf("%d",&n);

int key;
printf(" enter the number wjich you want to search in the arry");
scanf("%d",&key);

    int arr[n];
    int s=0;
    int e=n-1;
    int i;
    for (i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }
    linearsearch(arr,s,e,key);
    return 0;
}