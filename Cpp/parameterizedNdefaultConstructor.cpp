#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    
    Complex(int, int); // Constructor Declaration
    void printNumber(){
        cout<<"Your number is "<< a << " + " << b <<"i"<<endl;
    }
};

Complex :: Complex(int x, int y) // ---> This is a Parametrrized constructor as it takes no parameter
{
    a=x;
    b=y;
}
int main(){
    // Implicit call
    Complex a(29, 37);
    // Explicit call

    Complex b = Complex(6, 8);
    a.printNumber();
    b.printNumber();
    return 0;
}
