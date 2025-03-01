#include<iostream>
using namespace std;
class complex{
    public:
        int real;
        int imag;
        complex(){
            real = 0;
            imag = 0;
        }
        complex(int real,int imag){
            this->real = real;
            this->imag = imag;
        }
        
        complex operator + (const complex& c){
            return complex(real+c.real,imag+c.imag);
        }
        void display(){
            cout<<real<<" + "<<imag<<"i";
        }

};

int main(){
    complex a(1,3);
    complex b(2,3);
    complex c = a+b;
    c.display();

}