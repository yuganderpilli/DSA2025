#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,8,6,2,5,4,8,3,7};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=sizes-1;
    int maxWater=0;
    while(i<j){
        int w=j-i;
        int h=min(arr[i],arr[j]);
        int area=w*h;
        maxWater=max(maxWater,area);
        if(arr[i]>arr[j]){
            j--;
        }else{
            i++;
        }
    
    
    }
    cout<<maxWater;

}