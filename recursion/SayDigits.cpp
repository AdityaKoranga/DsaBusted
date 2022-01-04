#include<iostream>
#include<string>
using namespace std;
void sayDigit(int n,string arr[]){
    //base case
    if(n==0)
    return ;
    //processing [part]
    int digit=n%10;
    n=n/10;

    //R.C
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";

}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine",};
int n;
cin>>n;
sayDigit(n,arr);
cout<<endl;

return 0;
}