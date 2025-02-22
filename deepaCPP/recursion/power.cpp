/*Write a recursive function to compute x^n (where x is a real number and n is an integer).

sample output:
Enter the base (x): 2                                                                                                   
Enter the exponent (n): 3                                                                                               
2^3 = 8 
*/

#include<iostream>
using namespace std;
int Power(int base,int power){
    if(power == 1) return base;
    return (base*Power(base,power-1));
}
int main(){
    cout<<"Enter base: ";
    int base;
    int power;
    cin>>base;
    cout<<"Enter the power: ";
    cin>>power;
    cout<<Power(base,power);
}