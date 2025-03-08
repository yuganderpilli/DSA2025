#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> temp={"eat","tea","tan","ate","nat","bat"};
    int sizes = temp.size();
    
    map<string,vector<string>> ans;

for(auto it: temp){
    int ch[26]={0};

for(auto its:it){
    ch[its-'a']++;
}
string s="";
for(int i=0;i<26;i++){
    if(ch[i]>0){
        s=s+string(ch[i],'a'+i);
    }
}
ans[s].push_back(it);

}



for(auto it:ans){
    cout<<it.first<<" ";

    for(auto its:it.second){
        cout<<its<<" ";
    }
    cout<<endl;
}

}