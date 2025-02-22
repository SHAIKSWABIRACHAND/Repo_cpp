/*
Write a C++ program for a library maintains a list of books available in a section.
A book is borrowed, and it needs to be removed from the list.
*/

// we can just remove it and left shift every other book 

// i will represent books as its book id which are numbers since we know which number to remove we can directly remove
// -1 represents emptiness of books
#include<iostream>
using namespace std;
int main(){
    int size = 6;
    int a[] = {1,2,3,5,8,-1};
    bool baseCondition = false;
    int bookToBeRemoved = 3;
    for(int i = 0;i<size-1;i++){
        if(a[i] == bookToBeRemoved){
            baseCondition = true;
        }
        if(baseCondition){
            a[i] = a[i+1];
        }
    }
    
    for(int i = 0;i<size;i++){
        cout<<a[i]<<" ";
    }
}