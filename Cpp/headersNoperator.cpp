// There are two types of header files:
// 1. System header files : it comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "file.h" //--> THis will produce an error if this.h is not present in current directory
 using namespace std;

 int main(){
    int a = 4, b = 5;
    cout<<"This is hello world program"<<endl;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic Operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    // Assignment Operator: used the assign the value to a variable
    // int a = 8;
    // char c = 'd';

    // Comparison Operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl<<endl;

     // Logical Operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical Not operator (!(a==b)) is: "<<(!(a==b))<<endl;
    return 0;
 }