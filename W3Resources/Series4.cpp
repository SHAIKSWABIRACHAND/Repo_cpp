#include<iostream>
#include<cmath>
using namespace std;

double fact(int n){
    double sum = 0;
    for(int i = 1;i<=n;i++){
        sum*=i;
    }
    return sum;
}

double seq(int x,int n){
    return (pow(-x,2*n))/fact(2*n);
}

int main(){

    // int x = 3;
    // int n = 5;
    // double series = 0;
    // for(int i = 1;i<=n;i++){
    //     series+=seq(x,i);
    // }
    // cout<<series;
    cout<<seq(3,2);


}