/*Write a C++ Program to find the largest element smaller than a target element in a sorted array.*/

#include<iostream>
using namespace std;

int Function(int a[] , int size,int target){
    int result = 0;
    int left = 0,right = size-1,mid = left+(right-left)/2;
    while(left<=right){
        if(a[mid] == target){
            result = mid;
            right = mid-1;
        }
        else if(a[mid]<target){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
        mid = left+(right-left)/2;
    }
    return a[result-1];
}

int main(){
    int n = 10;
    int target = 4;
    int a[n] = {1,2,3,4,4,4,5,6,7,10};
    cout<<Function(a,n,target);
}