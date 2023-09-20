#include<iostream>
using namespace std;

// Base class
class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}
class Derived : private Base{ // Class is being derived basically.
    int data3;
    public:
        void process();
        void display();
};

void Derived :: process(){
    setData();
    data3 = data2 * getData1();
}
void Derived :: display(){
    cout<<"The value of data1: "<<getData1()<<endl;
    cout<<"The value of data2: "<<getData2()<<endl;
    cout<<"The value of data3: "<<data3<<endl;
}

int main(){
    Derived der;
    // der.setData();
    der.process();
    der.display();
    return 0;
}