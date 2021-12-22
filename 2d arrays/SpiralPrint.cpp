#include<iostream>
#include<vector>
using namespace std;
vector<int>SpiralOrder(vector<vector<int>>matrix){
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();
    int count=0;
    int total=row*col;
    int startingrow=0;
    int startingcol=0;
    int endingrow=row-1;
    int endingcol=col-1;
    while(count<total){
        //print starting row
        for(int index=startingcol;count<total && index<endingcol;index++){
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;
        //print ending col
        for(int index=startingrow;count<total && index<endingrow;index++){
            ans.push_back(matrix[index][endingcol]);
            count++;

            }    
            endingcol--;
        for(int index=endingcol;count<total && index>=startingcol;index--){
            ans.push_back(matrix[endingrow][index]);
            count++;

        }
        endingrow--;
        //print starting col
        for(int index=endingrow;index>=startingrow;index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
        
    }
    return ans;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));//n =rows, m=column
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>matrix[i][j];
            }

        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    
    vector<int> output=SpiralOrder(matrix);
    print(output);
return 0;
}