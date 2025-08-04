#include<iostream>
using namespace std;
int minimumelement(int arr[],int target,int i,int sum){

    if(arr[i]>target){
        // return 0;
    
    }
    if(sum==target){
        return i;
        // break;

        
    }
    // if(arr[i]<=target){
        
    // }

minimumelement(arr,target,i-1,sum);
return sum=sum+arr[i];

}
int main()
{
    int arr[]={1,2,3};
    int target=5;
    int i=3;
    int sum=0;
     int count=minimumelement(arr,target,i,sum);
     cout<<count;
     return 0;

    
} 
