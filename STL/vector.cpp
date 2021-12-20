#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v ;
v.push_back(1);
cout<<"sizeof vector"<<v.capacity()<<endl;
v.push_back(2);
cout<<"sizeof vector"<<v.capacity()<<endl;
v.push_back(3);
cout<<"sizeof vector"<<v.capacity()<<endl;
cout<<v.size()<<endl;
cout<<"element at 2nd index"<<v.at(2)<<endl;
v.pop_back();
for (int i:v){
    cout<<i<<"  ";
}cout<<endl;
vector<int> a(5,1);
for(int j:a){
    cout<<j<<"  "
;}cout<<endl;
vector<int> last(a);
for (int i: last){
    cout<<i<<" ";
}cout<<endl;

return 0;
}