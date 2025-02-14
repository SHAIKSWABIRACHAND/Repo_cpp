/* 
Write a program in C++ to find the perfect numbers between 1 and 500.
The perfect numbers between 1 to 500 are:
*/

#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
    int start = 1,end = 500;;
    while(true){
        if(pow(start,2)>=end){
            break;
        }
        cout<<pow(start,2)<<" ";
    start++;
    }
    return 0;
}
