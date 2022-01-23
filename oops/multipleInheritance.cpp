#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"barking"<<endl;

    }
};
class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
//multiple inheritance
class Hybrid : public Animal,public Human{

};
int main(){
    Hybrid object1;
    object1.bark();
    object1.speak();
    
return 0;
}