//check if array is rotated amd sorted
#include<iostream>
#include<vector>
using namespace std;

    bool check(vector<int>arr){
        int count=0;
        int size=arr.size();
        for(int i=1;i<size;i++){
            if(arr[i-1]>arr[i]){
                count++;

            }
        }
        if(arr[size-1]<arr[0]){
            count++;
        }
        return count<=1;
    }


int main(){
    vector<int>arr;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(1);
    arr.push_back(2);
    bool ans=check(arr);
    cout<<ans;
    
return 0;
}
