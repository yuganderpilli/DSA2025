#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,0,0,1,2,2,7};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=sizes-1;
    int target=1;
    while(i<j){
        if(arr[i]+arr[j]>target){
            j--;    
        }else if(arr[i]+arr[j]<target){
            i++;
        }else if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" "<<arr[j]<<" ";
            i++;
            j--;
            while(i<j && arr[i]== arr[i-1]){
                i++;
            }
            while(i<j && arr[j]==arr[j+1]){
                j--;
            }
        }
    }
}