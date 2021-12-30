#include<iostream>
using namespace std;
int main(){
int n=5;
int *p=&n;


cout<<p<<endl;
cout<<*p<<endl;

cout<<++n<<" "<<p<<"  "<<*p<<endl;
*p=++*p;
cout<<"final answer"<<*p<<"  "<<n<<endl;
cout<<*p++<<"  "<<n<<endl;
return 0;
}