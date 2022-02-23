#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(14);
    q.push(15);
    cout<<"size of queue is"<<q.size()<<endl;
    q.pop();
    cout<<"size is"<<q.size()<<endl;
    if(q.empty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"queue is not emprty"<<endl;
    cout<<"front of queue is "<<q.front()<<endl;
return 0;
}