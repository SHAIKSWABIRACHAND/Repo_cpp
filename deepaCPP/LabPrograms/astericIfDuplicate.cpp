/* 
most of the people tend to print the characters but we need to store those characters in 
order to print them later or do operations on those output
*/

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a string: ";
    string s;
    cin>>s;
    string s1;
    cout<<"the string we require is: ";
    s1 = s1+s[0];
    for(int i = 1;i<s.length();i++){

        if(s[i] == s[i-1]){
            s1 = s1+'*';
        }
            s1 = s1+s[i];
    }

    cout<<s1;
}