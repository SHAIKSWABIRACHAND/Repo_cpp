/*
case 1:
    0 1 2
    has a peak at index 2 and eleemnt 2 is the peak
case 2:
    2 1 0
    has a peak at index 0
case 3:
    1 2 1 2 1 2 1
case 4: 
*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    while(n<1){
        cout<<"please neter a number greater than 1";
        cin>>n;
    }
    int peak = 0;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    if(a[0]>a[1]) {
        peak++;
        cout<<"peak at index: "<<0<<endl;

    } 

    for(int i = 1;i<n-1;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            peak++;
            cout<<"peak at index: "<<i<<endl;
        }
    }

    if(a[n-1]>a[n-2]){
        peak++;
        cout<<"peak at index: "<<n-1<<endl;
    }

    cout<<"Total number of peaks: "<<peak;
}
