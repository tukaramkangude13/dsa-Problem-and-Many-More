#include<iostream>
using namespace std;    
void print(int n){
    if(n==0){
        return;
    }
    print(n/10);

int digit=n%10;
cout<<digit<<endl;
}
int main(){
    int n=234;
    print(n);
  
    return 0;
}