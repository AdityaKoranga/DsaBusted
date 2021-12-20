#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    while (start<=end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            //it will be like arr[mid]>key
            end=mid-1;

        }
        mid=start+((end-start)/2);
    }return -1;
}
int main(){
int even[6]={2,4,6,8,12,25};
int odd[5]={2,6,8,9,10};
int integer=binarySearch(even,6,12);
cout<<"index of 12 is "<<integer<<endl;
integer=binarySearch(odd,5,8);
cout<<"index of 8 is "<<integer<<endl;
return 0;
}