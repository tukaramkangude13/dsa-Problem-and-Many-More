#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool possible(vector<long long int> trees,long long m,long long mid){
    long long int woodcollected=0;
    for(int i=0;i<trees.size();i++)
    {
        if(trees[i]>mid)
        {
            woodcollected+=trees[i]-mid;
        }
    }
return woodcollected>=m;
}
long long int maxsawbladeheight(vector<long long int> trees,long long m)
{
long long int start=0,end,ans=-1;
end=*max_element (trees.begin(),trees.end());
while(start<=end)
{
long long int mid=start+(end-start)/2;
    if(possible(trees,m,mid)){
        ans=mid;
        start=mid+1;
}
    else{
        end =mid-1;
   }
}
 return  ans;
}
int main()
{ 
long long int m,n;
cin >> n>>m;
vector<long long int> trees;
while(n--){
    long long int height;
    cin>>height;
    trees.push_back(height);
}
    cout<<maxsawbladeheight(trees,m)<<endl;
}