#include<iostream>
using namespace std;
long long int binarysearch(int n){
    int s=0;
    int e=n;
    int ans=-1;
    long long int mid=s+(e-s)/2;
    while (s<=e){
        long long int square=mid*mid;//overflow hogya toh, iss liye long long int maan lo
        if (square==n){
            return mid;
        }
        else if(square<n){
            ans =mid;
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }return ans;
}
int sqrt(int x){
    return binarysearch(x);
}
int main(){
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    cout<<"sqrt is "<<sqrt(x); 


return 0;
}