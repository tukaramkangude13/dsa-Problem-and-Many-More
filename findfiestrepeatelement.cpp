#include<iostream>
#include<vector>
using namespace std;
int main()
{
int a[6]={10,20,30,40,50,60};
int b[]={1,2,3,4,50,60};
int c[]={15,30,20,40,50,60,70,80,90,100};
for(int i=0;i<6;i++)
{
for(int j=0;j<6;j++)
{
    if(a[i]==b[j])
    {
        for(int d=0;d<10;d++)
        {
            if(c[d]==a[i])
            cout<<a[i]<<" ";
        }
    }
}
}

}
