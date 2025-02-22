/*Write a recursive function to calculate the sum of the first n terms of an arithmetic series with a given 
first term a and common difference d.

sample output:
Enter the first term (a): 1                                                                                             
Enter the common difference (d): 1                                                                                      
Enter the number of terms (n): 5                                                                                        
Sum of the first 5 terms of the arithmetic series is: 15
*/

#include<iostream>
using namespace std;
int Series(int a,int d,int n){
    if(n==0){
        return 0;
    }
    int num = a+(n-1)*d;
    return num+Series(a,d,n-1);
}

int main(){
    cout<<"Enter a: ";
    int a;
    cin>>a;
    cout<<"Enter d ";
    int d;
    cin>>d;;
    cout<<"Enter n: ";
    int n;
    cin>>n;

    cout<<Series(a,d,n);
}