#include<iostream>
using namespace std;
int modularExponenttiation(int x, int n,int m){
    int res=1;
    while(n>0){
        if (n&1){
            //odd
            res=(1LL*(res)*(x)%m);

        }
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;//bits m divide by 2


    }
    return res;
}
int main(){

return 0;
}