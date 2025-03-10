#include<iostream>
using namespace std;
string merge(string s1,string s2){
    string s="";
    s+=s1;
    s+=s2;

    return s;
}
int main(){
    string s1="hannu";
    string s2="swabira";
    cout<<merge(s1,s2);
}