#include<iostream>
using namespace std;
char getMaxOccChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;

        //lower case
        if(ch>='a' && ch<='z'){
            number=ch-'a';}
            
        else{
            //uppwer case
            number=ch-'A';
            }
        arr[number]++;

        }
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }

        }
        char finalanswer='a'+ans;
        return finalanswer;
    
}
int main(){
string s;
cin>>s;
cout<<getMaxOccChar(s);
return 0;
}