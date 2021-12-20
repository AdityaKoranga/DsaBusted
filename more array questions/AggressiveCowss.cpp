#include<iostream>
using namespace std;
bool isPossible(int stalls[],int n,int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0];
    for ( int i=0;i<n;i++){
        if (stalls[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastpos=stalls[i];
        }
    }
    return false;

}
int aggressiveCow(int stalls[],int n ,int k){//k is number of aggressive cows
//array bhi ssort karna padega
    int s=0;
    int maxi=-1;
    for (int i=0;i<n;i++){
        maxi=max(maxi,stalls[i]);

    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int stalls[5]={4,2,1,3,6};
    cout<<"the maximum distance will be"<<aggressiveCow(stalls,5,2);

return 0;
}