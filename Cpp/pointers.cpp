#include<iostream>
using namespace std;

int main(){
    // What is pointer -----> data type which holds the address of other data types

    int a=5;
    int* b = &a;
    // & ----> (Address Of) operator
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    // * ----> (value at) Dereference operator
    cout<<"the value at address b is: "<<*b<<endl; 

    // Pointer to Pointer ----> stores the address of other pointer
    int** c= &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"the value at address c is: "<<*c<<endl; 
    cout<<"the value at address value_at(value_at(c)) is: "<<**c<<endl; 

    return 0;
}