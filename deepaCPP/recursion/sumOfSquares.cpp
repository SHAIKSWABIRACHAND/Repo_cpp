/*Write a recursive function to calculate the sum of squares of the first n natural numbers.
sample output:
Enter a positive integer: 5                                                                                             
The sum of squares of the first 5 natural numbers is: 55 
*/

#include<iostream>
using namespace std;
int SumOfSquares(int n){
    if(n == 1) return 1;
    return (n*n+SumOfSquares(n-1));
}
int main(){
    cout<<"Enter a positive integer: ";
    int n;
    cin>>n;
    cout<<"The sum of squares of the first 5 natural numbers is: "<<SumOfSquares(n)<<"\n";

}