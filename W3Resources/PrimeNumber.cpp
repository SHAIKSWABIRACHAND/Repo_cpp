#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){


   int max,a = 10,b = 20 ;
   for(int i = 1;i<=200;i++){
    if(isPrime(i)){
        cout<<i<<" ";
    }
   }

}