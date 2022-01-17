#include<bits/stdc++.h>
using namespace std;
class Hero{
    private:
    int health;
    public:
    //properties
    
    char level;
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h/*string name*/){
        //sirf addy name ka banda hi change kar sakta h ye condition lagayi h
        // if( name=="addy")
        health=h;
        
    }
    void setLevel(char ch){
        level=ch;
    }
    //agar private k properties use   karne k liye getter aur setter use karenge

};
int main(){
    Hero addy;

    cout<<"addy health is"<<addy.getHealth()<<endl;
    // addy.health=80;
    addy.setHealth(70);
    addy.level='A';
    cout<<"size :"<<sizeof(addy)<<endl;
    cout<<"health is:"<<addy.getHealth()<<endl;
    cout<<"level is:"<<addy.level<<endl;

    //dynamically
    Hero *b=new Hero; 
    b->setLevel('B');
    b->setHealth(50);
    cout<<"level is"<<(*b).level<<endl;
    cout<<"health is"<<(*b).getHealth()<<endl;
    //or u can do this also
    cout<<"level is"<<b->level<<endl;
    cout<<"health is"<<b->getHealth()<<endl;

return 0;
}   