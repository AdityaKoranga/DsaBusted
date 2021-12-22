#include<iostream>
using namespace std;
int main(){
//creating 2d arrays
int arr[3][4];
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}
//print row wsie
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
//printing colwise
for (int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
}

return 0;
}