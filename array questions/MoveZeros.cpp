#include<iostream>
#include<vector>
using namespace std;
vector<int> movezero(vector<int>v) {
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            swap(v[j],v[i]);
            j++;
        }
    }
    return v;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);
    v.push_back(0);
    vector<int> ans=movezero(v);
    print(ans);

return 0;
}