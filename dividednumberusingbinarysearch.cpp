#include<iostream>
using namespace std;
int solve(int dividend, int divisor)
{
    int s=0;
    int ans=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(mid*divisor==dividend)
        return mid;
        if (mid*divisor>dividend)

        {
            /* code */e=mid-1;
        }
        if(mid*divisor<dividend)
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
   return ans; 
}
int main()
{
    int dividend=2002;
    int divisor=21;
    int ans= solve(dividend,divisor);
cout<<ans;

}