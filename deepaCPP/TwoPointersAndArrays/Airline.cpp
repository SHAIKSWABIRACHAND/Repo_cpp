/*
An airline maintains a list of passengers for a flight. 
A passenger cancels their ticket, and their name needs to be removed from the list. 
Write a  c++ program to handle this.
*/


#include<iostream>
using namespace std;
int main(){
    int size = 5;
    string a[size] = {"swabira","srihitha","chand","charanya","abdul"};
    cout<<"Enter a name:";
    string passenger;
    cin>>passenger;
    bool BaseCondition = false;
    for(int i =0; i<size-1; i++){
        if(a[size-1] == passenger) {a[size-1] = " ";break;}
        if(a[i]==passenger)
            BaseCondition = true;
        
        if(BaseCondition){
            a[i] = a[i+1];
        }
        
    }
    
    for(int i = 0;i<size;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}





