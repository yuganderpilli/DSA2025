#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,11,7,15};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    map<int,int> temp;
    int target=9;
    for(int i=0;i<sizes;i++){
            int diff= target-arr[i];
            if(temp.find(diff)!=temp.end()){
                cout<<i<<temp[diff];
                break;
            }
            temp[arr[i]]=i;
    }
}