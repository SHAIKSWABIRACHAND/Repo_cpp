/*Write a C++ Program to find the smallest element greater than a target element in a sorted array.*/


#include<iostream>
using namespace std;

int Function(int a[],int size,int target){
    int result = -2;
    int left = 0,right = size-1,mid = left+(right-right)/2;
    while(left<=right){
        if(a[mid] == target) {
            result = mid;
            left = mid+1;
        }
        else if(a[mid]<target){
            left = mid +1;
        }
        else{
            right = mid-1;
        }
        mid = left+(right-left)/2;
    }
    
    return a[result+1];
}

void Display(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n = 10;
    int a[n] = {1,2,3,3,4,5,6,6,8,9};
    Display(a,n);
    cout<<"\n";
    int target = 6;
    int answer = Function(a,n,target);
    cout<<answer;
    
}