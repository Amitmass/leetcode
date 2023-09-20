#include<iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator: Takes input of 2 numbers using utility function and perform 
    +, -, /, * and display the results using snother function.
    2. ScientificCalculator: Takes input of 2 numbers using a utility function and perform
    any four scientific operations of your choice and display the result using another function

    Create another class HybridCalculator and inherit it using these 2 classes
    Q1: What type of inheritance are you using? --> Multiple Inheritance
    Q2: Which mode of inheritance are you using? --> public SimpleCalculator, public ScientificCalculator
    Q3: Create an object of HybridCalculatorand display results of simple and scientific calculator.
    Q4: How is code reusability implemented?

*/

class SimpleCalculator{
    int a, b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void performSimpleOperations(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator{
    int a, b;
    public:
        void getDataScienific(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void performScientificOperations(){
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};
int main(){
    HybridCalculator hyb;
    hyb.getDataSimple();
    hyb.performSimpleOperations();
    hyb.getDataScienific();
    hyb.performScientificOperations();

    return 0;
}