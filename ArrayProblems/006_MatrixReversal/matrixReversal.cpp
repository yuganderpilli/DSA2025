#include<bits/stdc++.h>
using namespace std;
int  main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int sizes=3;

for(int i=0;i<sizes;i++){
    for(int j=0;j<sizes;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;



    for(int i=0;i<sizes;i++){
        for(int j=i;j<sizes;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

for(int i=0;i<sizes;i++){
    reverse(arr[i],arr[i]+sizes);
}

for(int i=0;i<sizes;i++){
    for(int j=0;j<sizes;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}