#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int>v,int k){
    int size=v.size();
    vector<int>temp(size);
    
    for (int i=0;i<size;i++){
        temp[(i+k)%size]=v[i];
       

    }
    v=temp;
    
    return v;
}
void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(12);
    v.push_back(34);
    v.push_back(3);
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    vector<int> ans=rotate(v,2);
    print(ans);

return 0;
}