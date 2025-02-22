/*Write a recursive function to calculate the sum of the digits of a number.

sample output:
Enter a number: 123                                                                                                     
Sum of digits of 123 is: 6
*/

#include<iostream>
using namespace std;
int sum(int x){
    if(x/10 == 0) return x;
    int r = x%10;
    return (r+sum(x/10));
}

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Sum of digits of "<<x<<" is: "<<sum(x);
}