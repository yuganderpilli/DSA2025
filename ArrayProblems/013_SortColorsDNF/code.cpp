 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[]={0,1,2,2,1,0,0,0,0,1,1,2,2,2,0,1};
    int sizes = sizeof(arr)/sizeof(arr[0]);
int i=0;
int j=0;
int k=sizes-1;
cout<<i<<j<<k<<endl<<endl;
while(j<=k){
    if(arr[j]==1){
        j++;
    }
    else if(arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j++;
    }else{
        swap(arr[j],arr[k]);
        k--;
    }
}
for(int i=0;i<sizes;i++){
    cout<<arr[i]<<" ";
}
    
    
    }