#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="aditya";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
    while(!s.empty()){
        char c=s.top();
        ans.push_back(c);
        s.pop();
        
    }
    cout<<"answrer is "<<ans<<endl;
return 0;
}   
//tc O(n)
//sc O(n)