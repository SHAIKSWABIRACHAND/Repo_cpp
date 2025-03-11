/*Write a recursive function to calculate the sum of the first n terms of a geometric series with a given 
first term a and common ratio r

sample output:
Enter the first term (a): 2                                                                                             
Enter the common ratio (r): 3                                                                                           
Enter the number of terms (n): 4                                                                                        
The sum of the first 4 terms of the geometric series is: 80 
*/


#include<iostream>
#include<math.h>
using namespace std;

int geoSer(int a,int r,int n){
    if(n == 0){
        return 1;
    }

    int num = a*pow(r,n-1);
    return num+geoSer(a,r,n-1);
}

int main(){
    cout<<"Enter a: ";
    int a;
    cin>>a;
    cout<<"Enter r: ";
    int r;
    cin>>r;
    cout<<"Enter n: ";
    int n;
    cin>>n;

    cout<<geoSer(a,r,n)<<"\n";
}