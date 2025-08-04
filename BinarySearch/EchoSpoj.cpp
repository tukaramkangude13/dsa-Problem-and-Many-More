#include <iostream>
#include <vector>

using namespace std;
bool ispossible(vector<int>& arr,int blade,int need){
    int total=0;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
        if(arr[i]>blade)
        total+=arr[i]-blade;
        if(total>=need)return true;
    }
    return false;


}
int main() {
   int need = 1; // Large required wood
vector<int> arr = {
    20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 
    110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 165, 170, 175, 180,
    185, 190,  290, 295, 300, 305, 310, 315, 320, 325, 330, 
    335, 340, 345, 350, 355, 360, 365, 370, 375, 380, 385, 390, 395, 400
}; // Large array of tree heights

    int s = 0;
    int e = arr[arr.size() - 1];
int ans=0;
while (s<=e)

{

int mid=s+(e-s)/2;
if(ispossible(arr,mid,need)){
    ans=mid;
    s=mid+1;
}
else e=mid-1;
}

    cout << ans; 
    return ans;
}
