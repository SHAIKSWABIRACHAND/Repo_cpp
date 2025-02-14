#include<iostream>

using namespace std;

long f(int n){
    return (n*n);
}


int main(){
    int n = 5;
    long series = 0;
    for(int i = 1;i<=n;i++){
        series+=f(i);
    }
    cout<<series;
}