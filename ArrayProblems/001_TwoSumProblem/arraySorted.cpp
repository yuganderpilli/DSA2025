#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int i=0;
    int j=sizes-1;
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;
        }else if(arr[i]+arr[j]<target){
            i++;
        }else{
            cout<<i<<" "<<j;
            break;
        }
    }    
}