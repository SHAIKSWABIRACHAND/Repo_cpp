/* write a program to find the string length using recursion

sample-input-output-1:
Enter a string: technology                                                      
The length of the string is: 10 
sample-input-output-2:
Enter a string: 123                                                             
The length of the string is: 3 

*/

#include<iostream>
#include<string>
using namespace std;

int Length(string s){
    if(s == "") return 0;
    int count = 1+Length(s.substr(1));
    return count;
}

int main(){
    cout<<"Enter a string: ";
    string s;
    cin>>s;
    cout<<"The length of the string is: "<<Length(s);
}