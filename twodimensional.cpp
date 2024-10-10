#include<iostream>
using namespace std;
int main()
{
    int m;
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }

    }

     for(int i=0;i<3;i++)
    {
       m=0;
        for(int j=0;j<3;j++)
        {
          m=m+arr[i][j];
        }

cout<<endl;

cout<<"sum of the "<<i+1;cout<< "row is"<<m;
    }

}



























