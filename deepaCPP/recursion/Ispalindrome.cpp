/* wrote a c++ program to check whether a given sting is palindrome or not

sample input-output-1:
Enter a string: sita                                                            
"sita" is not a valid palindrome.                                               
sample input-output-2:                                
Enter a string: malayalam                                                       
"malayalam" is a valid palindrome.


*/


#include<iostream>
#include<string>
using namespace std;

bool IsPalin(string s){
    if(s.length()<=1) return true;
    if(s[0]!=s.back()) return false;
    return IsPalin(s.substr(1,s.length()-2));
}

int main(){
    cout<<"Enter a string: ";
    string s;
    cin>>s;
    string ans = (IsPalin(s)? "is a valid palindrome": "is not a valid palindrome");
    cout<<s<<" "<<ans;
}