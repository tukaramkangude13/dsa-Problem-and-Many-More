#include<iostream>
void func(int n){
    if(n==0){
        return;
    }
    std::cout<<n<<std::endl;
    func(n-1);
    func(n-1);

std::cout<<"hello this is the tukaram kangude from the pune an aspinring  sotware enginerr whji clomly know know know how to right the algorigthm"<<std::endl;

    // std::cout<<n<<std::endl;
}

int main(){
    

int n=3;
func(n);
return 0;
}