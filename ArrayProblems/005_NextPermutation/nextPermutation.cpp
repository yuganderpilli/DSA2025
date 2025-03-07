#include<bits/stdc++.h>
using namespace std;
int main(){


vector<int> arr ={1,2,4,6,7,3};
int sizes = arr.size();
int swap_index=-1;

for(int i=sizes-1;i>=1;i--){
    if(arr[i]>arr[i-1])
        {
            swap_index=i-1;
            break;
        }
}
if(swap_index!=-1){
int temp=0;
for(int i=sizes-1;i>swap_index;i--){
    if(arr[i]>arr[swap_index]){
        temp=i;
        break;
    }
}
swap(arr[swap_index],arr[temp]);

reverse((arr.begin()+swap_index+1),(arr.end()));

}else{
    reverse(arr.begin(),arr.end());
}


for(auto it:arr){
    cout<<it<<" ";
}


}