#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int top;
int size;
stack(int size){
    arr=new int[size];
    this->size=size;
    top =-1;

}
// functions 
void push(int data){
    if(size- top >1)
    {
        //space is avil
        top++;
        arr[top]=data;
    }
    else{
        cout<<"stack is overflow "<<endl;


    }

}
void pop(){ 
if (top==-1){
    cout<<"stack is underflow ,cant delete element "<<endl;

}
else{
    // stack is not empty
    top--;
}


}
int getTop(){
if (size==-1){
    cout<<"stack is underflow ,cant delete element "<<endl;
return -1;
}
else{
    return arr[top];
}
}
//number of valid element present in the array 
int getSize(){
return top + 1;
}
bool isempty(){
 
    return top==-1;

}
 bool isfull(){
   return top==size-1;
 }

};
int main()
{
stack s(50);
// insertation 
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.push(70);
while (!s.isempty())

{
cout<<s.getTop()<<" ";
s.pop();
}

return 0;

}