#include<iostream>
using namespace std;
int glob = 6;
void sum(){
    int a;
    cout<<glob;
}
int main(){
    int a = 2;
    int b = 3;
    int a1 = 12, b1 = 13;
    float pi = 3.14;
    char c = 'd';
    bool is_true = true;
    bool is_false = false;
    sum();
    glob = 19;
    cout<<glob<<is_true<<is_false;
    // cout<<"This is for Datatypes."<<"\nThe value of a is: "<<a<<"\nThe value of b is: "<<b;
    // cout<<"\nThe value of Pi is: "<< pi;
    // cout<<"\nThe value of c is: "<< c;
    return 0;
}