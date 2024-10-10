#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement=s.top();
    s.pop();
    //rec call
    insertatbottom(s,target);
// back tracking
    s.push(topelement);

}

void reverse(stack<int> &s)
{
    // base condition
    if(s.empty()){
        return;
    }
   //



int target=s.top();
s.pop();








   //reverse stack
   reverse(s);
   //insert at bottom
   insertatbottom(s,target);
}






int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
  

  

    reverse(s);
cout<<"printing"<<endl;
  while (!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
    return 0;     

}