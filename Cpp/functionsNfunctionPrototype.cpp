#include<iostream>
using namespace std;
// function prototype
// Syntax: type fucntion-name (arguments)
// int sum(int num1, int num2); //Acceptable
// int sum(int num1, num2); //Not Acceptable
int sum(int, int); //Acceptable
// void g(void); //Acceptable
void g(); //Acceptable


int main(){
    int a, b;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number "<<endl;
    cin>>b;
    // a and b are aactual parameters
    cout<<"The sum is: "<<sum(a,b)<<endl;
    g();
    return 0;
}

// function
int sum(int num1, int num2){
    // Formal Parameters num1 and num2 will be taking values fromactual parameters a and b
    int num3 = num1 +num2;
    return num3;
}

void g(){
    cout<<"Hello, Good Morning";
}