#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i=0;i<n+1;i++){
        int minIndex=i;
        for (int j=i+1;j<n;j++){
            if( arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
void printarray(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={65,22,12,13,56};
    selectionsort(arr,5);
    printarray(arr,5);


return 0;
}