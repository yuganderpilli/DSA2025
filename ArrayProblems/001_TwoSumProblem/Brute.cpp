#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={2,11,7,15};
int sizes = sizeof(arr)/sizeof(arr[0]);
int target=9;
for(int i=0;i<sizes;i++){
    for(int j=i+1;j<sizes;j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<" "<<j;
            break;
        }
    }
}


}