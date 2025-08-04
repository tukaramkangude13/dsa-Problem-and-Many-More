#include<iostream>
using namespace std;
int findans(int s,int e,int num){
    int ans=0;
    while(s<=e){
        int mid=e+(s-e)/2;
        if(mid*mid<=num){
            ans=mid;
        }
        if(mid*mid<=num){
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
int main(){
     int num=5;
     int s=0;
     int e=num;
     int ans=findans(s,e,num);
          cout<<ans<<endl;

int output=0;

     for(int i=0;i<=ans;i++){
        if(i*i+ans*ans==num){
output=1;
        }
        if(i*i+ans*ans>num){
            ans--;
            i=1;
        }

     }
     if(output==0){
        cout<<"false "<<endl;
     }
     else cout<<" true"<<endl;

}