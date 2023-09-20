#include <iostream>
#include <string>
using namespace std;
class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary string" << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format" << endl;
            exit(0);
        }
    }
}

void Binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << "Strinfg check: " << s;
}

void Binary ::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    // OOPS -- Classes and Objects

    // C++ --> initially called -->C with classes by stroustroup
    // class --> extension of stuctures (in c)
    //  structures had limitations
    //          - members are public
    //          - No methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few members as private & few as public
    // structures in C++ are typedefed
    //  you can declare objectsalong with the class declarationlike this
    /*  class Employee{
            // Class definition
    } harry, rohan lovish; */
    // harry.salary = 8 makes no sense if salary is private

    // Nesting of member function
    Binary b;
    b.read();
    b.chk_bin();
    b.ones_complement();
    b.display();

    return 0;
}