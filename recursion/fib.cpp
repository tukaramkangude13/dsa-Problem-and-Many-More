#include<iostream>
int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
     int ans=fib(n-1)+fib(n-2);
     return ans;
    
}
int main(){
    int n;
n=9;
int ans=fib(n);
std::cout<<ans;
return 0;

}