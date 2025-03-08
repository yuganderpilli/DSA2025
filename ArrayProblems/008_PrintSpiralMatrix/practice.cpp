#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int top = 0;
    int bottom = sizes-1;
    int left=0;
    int right= sizes-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i];            
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right];
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i];
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left];
            }
            left++;
        }
    
    }
}