#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;

    for ( int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int a[5]={1,2,3,3,2};
    cout<<"unique no.is"<<unique(a,5);


return 0;
}