#include<iostream>
using namespace std;
void fib(int n,int arr[]){
    if(n==-1){
        return ;
    }
    
   
   int ans=fib(n-1,arr);
   std::cout<<arr[n];
   std::cout<<std::endl;

}
int main(){

int arr[]={1,2,3,4,5,6,7,8,9,10};
int n=9;
fib(n,arr);
return 0;

}