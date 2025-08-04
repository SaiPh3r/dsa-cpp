// overloading "+" operator to add complex numbers
#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:

    Complex(){

    }

    Complex(int a, int b) {
        this->real = a;
        this->imag = b;
    }

    void display() {
        cout << this->real << " + " << this->imag << "i" << endl;
    }

    Complex operator+(Complex B){
        Complex temp;
        temp.real = this->real+B.real;
        temp.imag = this->imag+B.imag;
        return temp;


    }
    Complex operator -(Complex B){
        Complex temp;
        temp.real = this->real  - B.real;
        temp.imag = this->imag -B.imag;
        return temp;
    }
};

int main() {
    Complex c1(3, 4);  
    Complex c2(4, 2);  
    c2.display();
    c1.display();   
    Complex C = c1+ c2;
    Complex D = c1- c2;
    C.display(); 
    D.display();
    return 0;
}
