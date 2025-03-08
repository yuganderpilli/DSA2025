#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={6,3,1,0};
    int sizes=sizeof(arr)/sizeof(arr[0]);
    map<int,int> temp;
    vector<int> result;
    sort(arr,arr+sizes);
    for(int i=0;i<sizes;i++){
        temp[arr[i]]++;
    }
for(int i=0;i<sizes;i++){
    int sample = arr[i]+arr[i];
    if(temp[arr[i]]==0) continue;

    if(temp.find(sample)==temp.end()|| temp[sample]==0){
        continue;
    }

    result.push_back(arr[i]);
    temp[arr[i]]--;
    temp[sample]--;

}    




for(auto it:result){
    cout<<it<<" ";
}


}