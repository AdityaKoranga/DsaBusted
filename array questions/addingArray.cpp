#include<iostream>
#include<vector>
using namespace std;
vector<int> add(vector<int>arr1,vector<int>arr2){
    int i=arr1.size()-1,j=arr2.size()-1;
    vector<int> ans;
    int carry=0;

    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    //second case
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    //third case
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);

    }
 return ans;
    
}
   vector<int> reverse(vector<int> ans){
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            swap(ans[i++],ans[j--]);

        }
        return ans;
      
   }
   void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   
    cout<<endl;
   }
int main(){
    vector<int> arr1;
    vector<int> arr2;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(4);
    arr1.push_back(5);
    arr2.push_back(9);
    arr2.push_back(0);
    arr2.push_back(9);
    vector<int> addedArray=add(arr1,arr2);
    
    print(reverse(addedArray));
return 0;
}