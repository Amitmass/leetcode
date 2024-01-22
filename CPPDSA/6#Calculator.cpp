#include<iostream>
using namespace std;

int main(){
    // Switch case
    int num1, num2;
    char op;
    cout<<"Enter the first and second:"<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation you want: "<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(num1 + num2)<<endl;
                break;
        case '-': cout<<(num1 - num2)<<endl;
                break;
        case '*': cout<<(num1 * num2)<<endl;
                break;
        case '/': cout<<(num1 / num2)<<endl;
                break;
        case '%': cout<<(num1 % num2)<<endl;
                break;
        default:
            cout<<"No operations found"<<endl;
            break;
    }
    return 0;
}