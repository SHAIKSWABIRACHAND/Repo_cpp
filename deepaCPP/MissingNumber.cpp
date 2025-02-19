#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" numbers";
    int arr[n];


    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    // int arr[7] = {0,1,2,3,4,5,7};
    int b[7] = {0,1,2,3,4,5,6};
    int l = 0,r = 6,mid = (r+l)/2;
    while(true){
        if(arr[mid] == b[mid]){
            l = mid;
        }else{
            r = mid;
        }
        mid = (r+l)/2;

        if(r-l == 1){
            if(arr[r] == b[r]){
                cout<<"no number is missing";
            }
            else{
                cout<<r;
            }

            break;
        }
    }
    

}