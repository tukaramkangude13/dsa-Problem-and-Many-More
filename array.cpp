#include<iostream>
using namespace std;
int main()
{
    int m=0,j=0;
int a[5]; 
cout<<a<<endl;
for( int i=0;i<5;i++)
cin>>a[i];
for( int i=0;i<5;i++)
{
    if(a[i]==0)
    {
     m++;
    }
    else
    {
         j++;
    }
}
cout<<"total 0:"<<m;
cout<<"total 1:"<<j;

} 