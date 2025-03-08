#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4]={3,3,1,1,2,2,1,2,1,1,1,2};
    int row =3;
    int col=4;
    map<int,vector<int>>temp;
    
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            temp[i-j].push_back(arr[i][j]);
            sort(temp[i-j].begin(),temp[i-j].end());
        }
    }
cout<<endl;
for(int i=row-1;i>=0;i--){
    for(int j=col-1;j>=0;j--){
        arr[i][j]=temp[i-j].back();
        temp[i-j].pop_back();

    }
}

for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}





}

