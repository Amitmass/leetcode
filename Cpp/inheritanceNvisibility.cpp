#include<iostream>
using namespace std;

// Base class
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/methods/etc....
};
Note:
1. Default visibility mode is private
2. Public visibility mode : Public members of the base class becomes Public member of derived class
3. Private visibility mode : Public members of the base class becomes Private member of derived class
4. Private members are never inherited
*/
// creating a programmer class 
class Programmer : public Employee{
    public:
    int languageCode;
    Programmer(int inpId){
        id = inpId;
        languageCode = 9;
    }
    
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();

    return 0;
}