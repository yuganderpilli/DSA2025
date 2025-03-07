#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sizes=3;
    int top=0;
    int bottom = sizes-1;
    int left=0;
    int right = sizes-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i];
        }
        top++;
        for(int j=top; j<=bottom;j++){
            cout<<arr[j][right];
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