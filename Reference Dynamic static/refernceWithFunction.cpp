#include<iostream>
using namespace std;
void update1(int n)
{
    n++;
}
//pass by refernece;
void update2(int& n){
    n++;

}
int main(){
    int n=5;
    cout<<"before update"<<n<<endl;
    update1(n);
    cout<<"after first update"<< n<<endl;
    update2(n);
    cout<<"after second update"<<n<<endl;
    


return 0;
}