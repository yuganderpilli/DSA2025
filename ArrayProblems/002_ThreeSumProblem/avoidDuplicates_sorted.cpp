#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,0,1,2,-1,-4,0,2};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+sizes);
    for(int i=0;i<sizes-2;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=sizes-1;
        int target=-(arr[i]);
        while(j<k){
            if(arr[j]+arr[k]>target){
                k--;
            }else if(arr[j]+arr[k]<target){
                j++;
            }else{
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]){
                    j++;
                }
                while(j<k && arr[k]==arr[k+1]){
                    k--;
                }
            }

        }
    
    }

}