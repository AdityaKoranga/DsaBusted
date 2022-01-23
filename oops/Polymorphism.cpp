#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"hello there"<<endl;

    }
    void sayHello(string name){
        cout<<"hi there"<<name<<endl;

    }
    int sayHello(int n){
        cout<<"hi there"<<endl;
        return n;



    }

};
//compile time polymorphism(statc poly.)
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;

    }
    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;

        cout<<"output"<<value2-value1<<endl;
    }
    void operator() (){
        cout<<"m braket hu"<<this->a<<endl;
    }
};
//run time polymorphism(dynamic pokymorphism)
class ANimal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public ANimal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
    // B obj1,obj2;
    // obj1.a=4;
    // obj2.a=7;
    // obj1+obj2;
    // obj1();
    Dog obj;
    obj.speak();
    cout<<endl;
    //function overriding
return 0;
}