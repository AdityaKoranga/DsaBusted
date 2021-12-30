#include<iostream>
using namespace std;
int main(){
int i=5;
int *p=&i;
int **p2=&p;
cout<<endl<<"sab sahi chalra H:"<<endl<<endl;
cout<<"printing p"<<p<<endl;
cout<<"address of p"<<&p<<endl;
cout<<*p2<<endl;
//ab sabhi same print honge
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;

cout<<&i<<endl;
cout<<p<<endl;
cout<<*p2<<endl;

cout<<&p<<endl;
cout<<p2<<endl;
return 0;
}