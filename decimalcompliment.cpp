#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number";
cin>>n;
int mask=0;
if (n==0){
    int ans=1;
}
while (n!=0){
    mask=(mask<<1)|1;
    n=n>>1;}
int ans=(~n)& mask;
cout<<"the compliment is"<<ans<<endl;

return 0;
}