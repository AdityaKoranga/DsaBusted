#include<iostream>
using namespace std;
bool linearsearch(int arr[], int size,int key){
    //base case
    if(size==0){
        return false;}
        if(arr[0]==key){
            return true;

        }
        else{
            bool remainingpart=linearsearch(arr+1,size-1,key);
            return remainingpart;
        }
    
}
int main(){
int arr[5]={3,4,1,2,6};
int size=5;
int key=2;
bool ans=linearsearch(arr,size,key);
if(ans){
    cout<<"present"<<endl;

}
else{
    cout<<"absent"<<endl;
}
return 0;
}