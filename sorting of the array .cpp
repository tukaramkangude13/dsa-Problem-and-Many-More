#include<stdio.h>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid+1]==target)
        return arr[mid+1];
        if(arr[mid-1]==target)
        return mid-1;
        if(target>arr[mid]){
            s=mid+2;
        }
        else
        {
        e=mid-2;
        }
        mid=s+(e-s)/2;
    }
return -1;

}

int main()
{
vector<int>arr{10,3,40,20,50,80,70};
int target=40;
int ans=binarysearch(arr, target);


}