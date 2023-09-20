#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union money{
    int rice; // 4
    char car; // 1
    float pounds; // 4
};

int main(){
    // ENum
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<m1;

    // Union
    // union money m1;
    // m1.rice = 99;
    // m1.car = 't';
    // cout<<m1.rice<<endl;


    // Strcuture
    // ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 100000;
    // cout<<"The value is: "<<harry.eId<<endl;
    // cout<<"The value is: "<<harry.favChar<<endl;
    // cout<<"The value is: "<<harry.salary<<endl;
    return 0;
}