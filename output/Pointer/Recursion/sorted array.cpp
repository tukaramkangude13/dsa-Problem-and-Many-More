#include<iostream>
#include<vector>

using namespace std;
bool CheckSorted( vector<int> v ,int n,int i)
{
    if(i==n-1)
    return true;
    if(v[i+1]<v[i])
    return false;
    return CheckSorted(v,n,i+1);
}
int main()
{vector<int> v{10,20,30,40,0,60};
int n=v.size();
int i=0;
bool isSorted=CheckSorted(v, n, i);
if(isSorted){
    cout<<"arrya is sorted";

}
else{
    cout<<"array is not sorted";

}
return 0;
}


