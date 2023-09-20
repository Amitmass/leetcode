#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=11;
    cout<<"the value of a was: "<<a<<endl;
    a = 45;
    cout<<"The value od a is: "<<a<<endl;
    //  Constants in C++
    const int b= 34;
    cout<<b<<endl;
    // b=67;  //We will get an error because b is constant

    // Manipulators in C++
    int c=3, d=67, e=5672;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<"The value of d without setw is: "<<e<<endl;

    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    cout<<"The value of d with setw is: "<<setw(4)<<d<<endl;
    cout<<"The value of d with setw is: "<<setw(4)<<e<<endl;

    // Operator Precedence

    int f=3, g=6;
    // int h = (f*5)+g;
    int h = ((((f*5)+g)-45)+87);
    cout<<h;
    return 0;

}