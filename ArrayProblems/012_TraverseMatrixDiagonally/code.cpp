#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    map<int,vector<int>> temp;
    vector<int> result;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp[i+j].push_back(arr[i][j]);
        }
    }
bool flip=true;
for(auto it:temp){
    if(flip){
        reverse(it.second.begin(),it.second.end());
   
    }
    for(auto its:it.second){
        result.push_back(its);
    }
    flip=!flip;
    
}

for(auto it:result){
    cout<<it<<" ";
}


}