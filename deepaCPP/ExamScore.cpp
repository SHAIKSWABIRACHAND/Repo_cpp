/*
Write a C++ program for school maintains a fixed-size array for student exam scores. 
When a new score is entered, it must be placed in the correct ranking order.
*/

#include<iostream>
using namespace std;

// basic code

void addScore(int a[], int n,int marks){
    // index which it is kept
    int i = n-1;
    while(a[i-1]<marks){
        a[i] = a[i-1];
        i--;
    }
    a[i] = marks;
}

void Display(int a[],int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    
    int n = 6;
    int a[n] = {100,90,60,40,9,8};
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;
    addScore(a,n,marks);
    Display(a,n);
    
    
}