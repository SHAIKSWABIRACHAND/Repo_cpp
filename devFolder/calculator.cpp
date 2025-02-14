#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "please enter a number";
    cin>>  a;

    int b;
    cout<< "please enter a number";
    cin>>  b;
    char c;
    cout<< "please eneter an operation";
    cin >> c;
    switch (c)
    {
    case '+':
        cout<< a+b;
        break;
    case '-':
        cout<< a-b;
        break;
    case '*':
        cout<< a*b;
        break;
    case '/':
        cout<< a/b;
        break;
    case '%':
        cout<< a%b;
        break;

    default:
    cout<< "invalid input";
        break;
    }

    return 0;

}