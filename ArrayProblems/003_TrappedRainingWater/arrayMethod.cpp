#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,2,0,3,2,5};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int left_max[sizes];
    int right_max[sizes];
     left_max[0]=arr[0];
    for(int i=1;i<sizes;i++){
        left_max[i]=max(left_max[i-1],arr[i]);
    }
    right_max[sizes-1]=arr[sizes-1];
    for(int i=sizes-2;i>=0;i--){
        right_max[i]=max(right_max[i+1],arr[i]);
    }

int sum=0;

for(int i=0;i<sizes;i++){
    sum+=(min(left_max[i],right_max[i])-arr[i]);
}

cout<<sum;



}