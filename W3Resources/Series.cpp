#include<iostream>
#include<cmath>
using namespace std;

double f(int n){
    return (pow(pow(n,n),-1));
}


int main(){
    int n = 5;
    double series = 0;
    for(int i = 1;i<=n;i++){
        series+=f(i);
    }
    cout<<series;
}