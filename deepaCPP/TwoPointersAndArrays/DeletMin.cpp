#include<iostream>
using namespace std;
int main(){
int n = 5;
int a[n] = {1,2,3,4,5};
for(int i = 0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"\n";
//Finidng minum number;

int min = 0;
for(int i = 1;i<n;i++){
if(a[min]>a[i]){
min = i;}
}
for(int i = min +1;i<n;i++){
a[i-1] = a[i];
}

cout<<"After deletion: ";
for(int i = 0;i<n;i++){
cout<<a[i]<<" ";
}
}
