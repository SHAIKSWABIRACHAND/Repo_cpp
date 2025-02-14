#include<iostream>
#include<cmath>
using namespace std;

int f(int n){
    return n*(n+1)/2;
}


int main(){
    int n = 5;
    double series = 0;
    for(int i = 1;i<=n;i++){
        series+=f(i);
    }
    cout<<series;
}