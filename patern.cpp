#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<"*";
        }
        for(int b=0;b<=i;b++)
        {
            cout<<"  ";
        }
         for(int j=5;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }




















    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int b=5;b>=i;b--)
        {
            cout<<"  ";
        }
         for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
















    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j;
        }
        
    }
}