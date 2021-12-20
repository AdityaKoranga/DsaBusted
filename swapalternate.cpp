#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);

    }
    
    }
}
int main(){
int even[8]={5,3,5,6,7,8,9,2};
int odd[5]={11,22,33,44,55};
swapalternate(even,8);
printArray(even,8);
swapalternate(odd,5);
printArray(odd,5);

return 0;
}