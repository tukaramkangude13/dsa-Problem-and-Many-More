#include<iostream>
using namespace std;
void isSoerted(int arr[],int n,int i){
    if(i==n-1){
        cout<<"yes the array is sorted";
        return;
    }
    if(arr[i]>arr[i+1]){
        cout<<"no the array is not sorted";
        return;
    }
    isSoerted(arr,n,i+1);
}
int main(){
    int arr[]={1,2,3,4,5,44,7,8,9,10};
int n=10;
int i=0;
isSoerted(arr,n,i);
}