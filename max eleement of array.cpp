#include <iostream>
using namespace std;
int main() 
{
    int num=28;
        int ans=0;
    for(int i=1;i<num;i++)
    {
        while(i<num)
        {
            if(num%i==0)
            ans=ans+i;
        }
    }
    if(ans==num)
    cout<<"perfect";

    else
    cout<<"not perfect";
return 0;
}
        

