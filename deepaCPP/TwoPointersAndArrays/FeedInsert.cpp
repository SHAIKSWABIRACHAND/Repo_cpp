#include<iostream>
using namespace std;

int main(){
    int position = 2;
    // position is not an index if position i stwo index is 1
    
    int size = 6;
    int a[size] = {1,2,5,6,8,0};
    int feed = 10;
    for(int i = size-1;i>=position;i--){
        a[i] = a[i-1];
    }
    a[position-1] = feed;
    for(int i = 0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
}
