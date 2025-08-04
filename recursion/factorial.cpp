#include<iostream>
int fib(int n){
    if(n==1){
        return 1;
    }
    
    //  int ans=1;
    int  ans=fib(n-1);
    
    std::cout<<ans;
    std::cout<<std::endl;
     return ans*n;
    
}
int main(){
    int n;
n=5;
int ans=fib(n);
std::cout<<ans;
return 0;

}