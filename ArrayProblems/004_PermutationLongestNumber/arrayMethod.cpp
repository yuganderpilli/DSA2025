#include<bits/stdc++.h>
using namespace std;
void multiply(vector<int> &draft,int &size, int multiplier){
    int carry =0;
    for(int i=0;i<size;i++){
        int res = multiplier* draft[i];
        res=res+carry;
        draft[i]=res%10;
    carry=res/10;
    }


    while(carry>0){
        draft[size]=carry%10;
        size++;
        carry=carry/10;
    }
}



int main(){
    int  num=5;
    int sizes=1;
    vector<int> draft(1000,0);
    draft[0]=1;
    for(int multipler=2; multipler<=num;multipler++ ){
            multiply(draft,sizes,multipler);
    }

for(int i=sizes-1;i>=0;i--){
    cout<<draft[i]<<" ";
}

}