#include<iostream>
using namespace std;
int firstOccurance(int  arr[],int size,int key){
    int s=0, e=size-1;
    int mid=s=((e-s)/2);
    int ans;
    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            e=mid-1;}
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }return ans;
        
    
}
int lastOccurance(int  arr[],int size,int key){
    int s=0, e=size-1;
    int mid=s=((e-s)/2);
    int ans;
    while(s<=e){
        if (arr[mid]==key){
            ans=mid;
            s=mid+1;}
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }return ans;
        
    
}
int main(){
int even[8]={1,2,3,3,3,3,3,4};
cout<<"first occurance is at index"<<firstOccurance(even,8,3);
cout<<"last occurance is at index"<<lastOccurance(even,8,3);

return 0;
}