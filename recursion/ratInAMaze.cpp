#include<bits/stdc++.h>
using namespace std;
bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>>& m){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;

    }
    else{
        return false;
    }
}
void solve(vector<vector<int>>& m,int n, vector<string>& ans,int x,int y,vector<vector<int>> visited,string path){
    //you have reached x,y here
    //base case
    if(x==n-1 && y==n-1 ){
        ans.push_back(path);
        return ;

    }
    visited[x][y]=1;
    //chaar choices h
    // D,L,U,R
    //down
    int newx=x+1;
    int newy=y;
    if (isSafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //left
    int newx=x;
    int newy=y-1;
    if (isSafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //right
    int newx=x;
    int newy=y+1;
    if (isSafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //up
    int newx=x-1;
    int newy=y;
    if (isSafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    visited[x][y]=0;
}


vector<string>FindPAth(vector<vector<int>>& m,int n){
    vector<string> ans;
    if(m[0][0]==0)
    return ans;
    int srcx=0;
    int srcy=0;
    //visitd waala vector banana h
    vector<vector<int>> visited=m;
    //initialse with zero
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;

        }
    }
    string path="";
    solve(m,n,ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){

return 0;
}