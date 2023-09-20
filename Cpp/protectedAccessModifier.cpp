#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
/*
For a Protected member:
                            Public Derivation       Private Derivation      Protected Derivation
    1. Private Member       Not inherited           not inherited           not inherited
    2. Protected Member     Protected               Private                 Protected
    3. Public Member        Public                  Private                 Protected
*/

class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<d.a<<endl; // WIll not work since a is protected in both base as well as derived class
    return 0;
}