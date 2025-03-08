#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    vector<vector<int>>ops={{1,0},{-3,1},{-4,0},{2,3}};
    vector<int>result;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int sumEven=0;
    for(int i=0;i<sizes;i++){
        if(arr[i]%2==0){
            sumEven+=arr[i];
        }
    }
for(int i=0;i<ops.size();i++){
    int val=ops[i][0];
    int idx=ops[i][1];
    if(arr[idx]%2==0){
        sumEven-=arr[idx];
    }
    arr[idx]+=val;
    if(arr[idx]%2==0){
        sumEven+=arr[idx];
    }
result.push_back(sumEven);
}



for(auto it:result){
    cout<<it<<" ";
}

}