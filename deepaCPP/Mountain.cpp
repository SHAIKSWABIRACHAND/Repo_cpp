#include<iostream>
using namespace std;
bool IsMountain(int a[],int size){
bool peakFound = false;

for(int i = 1;i<size-1;i++){

if(a[i-1]<a[i] and a[i]>a[i+1]){

if(peakFound == false){peakFound = true;}

else{peakFound = false;break;}

}
}
return (peakFound? true:false);
}
int main(){
cout<<"Enter the size";
int size;
cin>>size;
int a[size];
for(int i = 0;i<size;i++){cout<<"Enter: ";cin>>a[i];}
cout<<(IsMountain(a,size)? "Mountain\n":"Not a Mountain\n");
return 0;
}

