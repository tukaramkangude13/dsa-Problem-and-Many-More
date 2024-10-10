#include<iostream>
using namespace std;
int main()
{
    int num=28,s=0;
   int i=0;
    while(i<num)
    {
    if(i%10==0)
 {
    s=s+i;
 }
 i++;
    }
    if(s==num)
    cout<<"perfect";

    else
    cout<<"not pefect";
return 0;
}