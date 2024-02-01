#include<iostream>
using namespace std;

int nthTerm(int n){
    return (3*n+7);
}

int setBit(int a, int b){
    return (a&b);
}

int nthFibonacci(int number){
    int num1 = 0, num2 = 1;
    if(number == 1){
        return 0;
    }else if(number == 2){
        return 1;
    }
    for(int i=0; i < number-3; i++){
        int temp = num1 + num2;
        num1 = num2;
        num2 = temp;
    }
    return num1+num2;
}
int main(){
    int n;
    cin>>n;
    cout<<"The nth term of AP is "<<nthTerm(n)<<endl;

    int a,b;
    cin>>a>>b;
    cout<<"The Set Bit of a and b is: "<<setBit(a, b)<<endl;
    

    int fib;
    cin>>fib;
    cout<<"The nth term for the Fibonaccy series is: "<<nthFibonacci(fib)<<endl;
    return 0;
}