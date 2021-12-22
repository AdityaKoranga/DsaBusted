#include<iostream>
using namespace std;
    bool isPrime(int n){
        int cnt=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;

    }
    
    int countPrime(int n){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                cnt++;
            }
        }
        return cnt;
    }

int main(){
    int n;
    cin>>n;
    cout<<countPrime(n);

return 0;
}
