#include<iostream>
using namespace std;
bool CheckPalindrome(string str,int i,int j){
    //base case
    if(i>j)
    return true ;
    if(str[i]!=str[j])
    return false;
    else{
        return CheckPalindrome(str,i+1,j-1);
    }

}
int main(){
    string name="abba";
    cout<<endl;
    bool IsPalindrome=CheckPalindrome(name,0,name.length()-1);
    if(IsPalindrome)
    cout<<"it is Palindrome"<<endl;
    else{
        cout<<"it is not Palindrome"<<endl;
    }
return 0;
}