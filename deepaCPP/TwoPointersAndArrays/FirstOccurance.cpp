/*Write a C++ Program to find the first occurrence of a target element in a sorted array with duplicates.*/

#include<iostream>
using namespace std;

int Return(int a[],int size,int target){
    
    int result = -1;
    int left = 0,right = size-1,mid = left+(right-left)/2;
    while(left<=right){
    if(a[mid] == target){
        
        result = mid;
        right = mid-1;
    }
    
    else if(a[mid]<target) left = mid+1;
    else right = mid-1;
    
    mid = left+(right-left)/2;}
    return result;
}
int main(){
    int n = 10;
    int target = 2;
    int a[n] = {1,2,2,2,2,2,3,4,5,6};
    cout<<Return(a,n,target);
}