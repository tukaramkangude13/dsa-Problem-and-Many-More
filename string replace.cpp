#include<iostream>
#include<string>
using namespace std;
int main()
{
  /*  string senttence="hello ji kaise hai sare ";
string target="hello";
cout<<senttence.find(target);*/
 string senttence="hello ji kaise hai sare ";
string word="hello";
senttence.replace(0,4,"second");
cout<<senttence;
return 0;
}