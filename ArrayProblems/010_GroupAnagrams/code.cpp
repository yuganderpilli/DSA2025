#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> temp={"eat","tea","tan","ate","nat","bat"};
    
    int sizes = temp.size();
    map<string,vector<int>> ans;
    
    for(int i=0;i<sizes;i++){
        string temps= temp[i];
        sort(temps.begin(),temps.end());
        ans[temps].push_back(i);
    }   


    for(auto it:ans){
        
        for(auto its: it.second){
            cout<<temp[its]<<" ";
        }
        cout<<endl;
    }
}