#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
  /*  string senttence="hello ji kaise hai sare ";
string target="hello";
cout<<senttence.find(target);*/
 string senttence="hello ji kaise hai sare ";
string word="hello";
str.replace(0,4,word);
    char a[10],b[10];
    cin.getline(a,10);
   int i=0,t=0,count=0;
    while(a[i]!='\0')
    {
        cout<<a[i];
        i++;
        
    }
    cout<<endl;
for(int j=i-1 ;a[j]>=0;j--)
{
b[t]=a[j];
cout << b[t];
t++;
}

i=0;
 while(a[i]!='\0')
{
    if(a[i]!=b[i])
    {
      count=1;
      break;
        
    }
    i++;
    
}
if(count==1)
cout<<" not pallindrome";
else
cout<<"pallindrome";
return 0;

}