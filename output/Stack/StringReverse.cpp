#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str= "tukaram" ;
    stack<char>s;
    string key="a";
    for(int i=0; i <str.length();i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        if(s.top==key)
        cout<<s.top()<<" ";
        
s.pop();
    }
    cout<<endl;
}