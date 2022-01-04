#include<iostream>
using namespace std;
int CountDistinctWayToCLimb(long long n_stairs){
    //base case
    if(n_stairs<0)
    return 0;
    if(n_stairs==0)
    return 1;
    //R.c.
    int ans=CountDistinctWayToCLimb(n_stairs-1)+CountDistinctWayToCLimb(n_stairs-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<CountDistinctWayToCLimb(n);

return 0;
}