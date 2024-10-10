#include<iostream>
#include<vector>
using  namespace std;
void solveMaze(int arr[3][3],int row,int i,int j,
vector<vector<bool>>&visited,vector<string>& path,string output)
{





}

int main()
{
    int maze []={
                {1,0,0},
                {1,1,0},
                {1,1,1}
                };
                int rows=3;
                int col=3;
vector<vector<bool>>visited(row,vector<bool>(col,false));
visited [0][0]=true;
vector<string> path;
string output ="";
solveMaze(arr,row,0,0,visited,path output);







return 0;

}