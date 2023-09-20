#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is " <<real<<endl;
            cout<<"The imaginary part is " <<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    Complex c1;
    // c1.setData(5, 6);
    // c1.getData();
    // Complex *ptr = &c1; // Old Way
    Complex *ptr = new Complex;  // New way
    // (*ptr).setData(5, 6); // Is Exactly same as: 
    ptr->setData(5,6);
    // (*ptr).getData(); // is as good as: 
    ptr->getData();

    // Array of object
    Complex *ptr1 = new Complex[4];
    ptr1->setData(9,7);
    ptr1->getData();
    return 0;
}