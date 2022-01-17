#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
    int health;
    char *name;
    static int timeTOcomplete;
    hero(){
        cout<<"simple constructor called"<<endl; 
        name=new char[100];
    }
    //parameterised constructor
    hero(int health){
        cout<<"this->"<<this<<endl;
    this->health=health;
    }
    //copy constructor
    hero(hero& temp){
        //deep copy k liye
        char *ch=new char[strlen(temp.name)];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    //destructor
    ~hero(){
        cout<<"destructor called"<<endl;
    }
};
int hero::timeTOcomplete=5;
int main(){
    cout<<"hi"<<endl;
hero ramesh(20);
cout<<"address of ramesh"<<&ramesh<<endl;
    cout<<"hello"<<endl;
    //copy constructor
    hero ritesh(ramesh);
    hero hero1;
    char name[7]="babbar";
    hero1.setname(name);
    cout<<hero::timeTOcomplete<<endl;
return 0;
}