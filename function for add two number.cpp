#include<iostream>
using namespace std;
int add (int a,int b)
    {
        int result=a+b;
        return result;
    }
int main()
{
for (int i=0;i<=5;i++)
{
    if(i==0||i==5)
    {
        for(int j=5;j>i;j--)
        cout<<"*";
        for(int b=0;b<=i;b++)
        
       {
        cout<<"*";
         cout<<b;
       }
    }
    else
    {
         for(int j=5;j>=i;j--)
         cout<<" ";
         cout<<"1";
         for(int l=0;l<i;l++)
         cout<<"  ";
         cout<<i;
    }
    cout<<endl;
}
}