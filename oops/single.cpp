#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    public:
    void speak(){
        cout<<"speaking"<<endl;

    }
};
class Dog: public Animal{

};
int main(){
    Dog D;
    D.speak();
    cout<<D.age;
return 0;
}