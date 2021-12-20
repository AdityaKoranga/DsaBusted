#include<iostream>
using namespace std;
bool checkEqual(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}
bool checkInclusion(string s1, string s2){
    
    int count[26]={0};
    for( int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count[index]++;
    }
    //now traverse s2 strng in window of size s1 length and compare
    int i=0;
    int windowSize=s1.length();
    int count1[26]={0};
    //running for 1st window
    while(i<windowSize && i<s2.length()){
        int index=s2[i]-'a';
        count1[index]++;
        i++;

    }
    if(checkEqual(count, count1)){
        return 1;
        //aage procss karo

    }
    while(i<s2.length()){
        char newchar=s2[i];
        int index=newchar-'a';
        count[index]++;
        char oldchar=s2[i-windowSize];
        index=oldchar-'a';
        count[index]--;
        i++;
        if(checkEqual(count, count1)){
        return 1;

    }
    }
return 0;    
}   
int main(){
    string s1="ab";
    string s2="cbaooo";
    checkInclusion(s1,s2);

return 0;
}