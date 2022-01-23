#include<bits/stdc++.h>
using namespace std;
class Human{
    public:
    int heigth;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }
};
class Male: public Human{//parent aur child wala case
public:
string colour;
void sleep(){
    cout<<"male sleeping"<<endl;
}
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.heigth<<endl;

cout<< object1.colour<<endl;    
object1.setWeight(82);
cout<<object1.weight<<endl;
object1.sleep();
return 0;
}