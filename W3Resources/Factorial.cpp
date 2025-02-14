#include<iostream>
using namespace std;

long Factorial(int n){
    long fact =1;
    for(int i = 1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int a ;
    cin>>a;
    cout<<"Factorial of "<<a<<" is: "<<Factorial(a);
}