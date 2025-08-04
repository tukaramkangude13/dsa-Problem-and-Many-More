#include<iostream>
using namespace std;
void sorting(int arr[],int s, int e)
{
   
    for(int s=0;s<=e;s++)
    {
        for (int  t = 0;t < e; t++)
        {
        if(arr[s]<arr[t])
        {
            swap(arr[s],arr[t]);
        }
        }
        
     }
    return ;
}
int main()
{
    int arr[10]={10,20,3,6,12,43,56,12};
int e=7;
int s=0;
    for(int s=0;s<=e;s++)

cout<<arr[s]<<" ";
cout<<endl;
sorting(arr, s, e);
    for(int s=0;s<=e;s++)

cout<<arr[s]<<" ";
    return 0;
}