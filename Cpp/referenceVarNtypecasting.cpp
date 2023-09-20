#include <iostream>
using namespace std;

int c = 45;
int main()
{
    // Build in data types
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is:" << c << endl;
    cout << "The Global c is:" << ::c << endl;
    // float, double and long double---- Literals
    float d=34.4;
    long double e= 34.4;
    cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is:"<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is:"<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is:"<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is:"<<sizeof(34.4L)<<endl;

    cout<<"The value of d is:"<<d<<endl<<"The value of e id:"<<e<<endl;

    // Reference Variables
    float x=455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // TypeCasting---
    int num1=45;
    float num2=45.46;
    cout<<"The value of num1 is: "<<(float)num1<<endl;
    cout<<"The value of num1 is: "<<float(num1)<<endl;
    cout<<"The value of num2 is: "<<(int)num1<<endl;
    cout<<"The value of num2 is: "<<int(num1)<<endl;

    int abc=int(b);
    cout<<"The Expression is"<<num1+num2<<endl;
    cout<<"The Expression is"<<num1+int(num2)<<endl;
    cout<<"The Expression is"<<num1+(int)num2<<endl;

    return 0;
}