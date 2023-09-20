#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a Constructor
    // Constructor is a special member functionwith the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created

    Complex(void); // Constructor Declaration
    void printNumber(){
        cout<<"Your number is "<< a << " + " << b <<"i"<<endl;
    }
};

Complex :: Complex(void) // ---> This is adefault constructor as it takes no parameter
{
    a=10;
    b=0;
}
int main(){
    Complex C;
    C.printNumber();
    return 0;
}


/* Characteristics of constructor
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. It cannot return values and do not have return types.
4. It can have default arguments
5. We Cannot refer to their address

*/