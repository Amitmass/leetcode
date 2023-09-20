#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}
*/
class Test{
    int a, b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(2 * j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i + b)  --> Red Flag this will create problems because 'a' will be initialized first
        // Test(int i, int j) : b(j), a(i + b)
        Test(int i, int j)
        {
            b = j;
            a = i;
            cout<<"COntructor Executed"<<endl;
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};

int main(){
    Test t(4, 6);
    return 0;
}