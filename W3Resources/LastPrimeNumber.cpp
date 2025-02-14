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

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i = n;true;i--){
        if(i == 1){
            cout<<"1 is neither prime nor composite";
            break;
        }

        else if(isPrime(i)){
            cout<<i<<" is prime";
            break;
        }
    }

    

}