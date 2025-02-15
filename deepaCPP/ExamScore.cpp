/*
Write a C++ program for school maintains a fixed-size array for student exam scores. 
When a new score is entered, it must be placed in the correct ranking order.
*/

#include<iostream>
using namespace std;

 int* Arrange(int a[],int n,int x){
    int n = sizeof(a)/4;
   int index;
   bool BaseCondition = false;
   
   // later change this into an efficient way
    for(int i = 0; i<n - 1 ;i++){
        if(a[i]>x and a[i+1]<x){
            index = i+1;
            BaseCondition = true;
            break;
        }
        
        if(BaseCondition){
            for(int i = n - 2;i>=index;i-- ){
                a[i+1]=a[i];
            }
            a[index] = x;
        }
        
        return a;
    }
    //
    
    index;
    return a;
}
int main(){
    
}