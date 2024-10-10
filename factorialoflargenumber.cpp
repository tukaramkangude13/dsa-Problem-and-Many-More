#include<iostream>
using namespace std;
int findsqrt(int n){
    int target=n;
    int s=0;
   int e=n;
   int ans;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(mid*mid==target)
        return mid;
        else if(mid*mid>target)
        //left search
        {
            e=mid-1;
        }
        else{
            //store ans
             ans=mid;
            s=mid+1;

        }
        mid=s+(e-s)/2;
           
    }
    return  ans;


}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    int ans=findsqrt(n);
     cout<<"ans is"<<ans;
cout<<"ans is "<<ans;

} 