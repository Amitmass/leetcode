#include<iostream>
using namespace std;
// Inline function
inline int product(int a, int b){
    return a*b;
}
// default arguments
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

// static arguments
// Note: DO not use static variables while using inline function
// int product(int a, int b){
//     static int c = 0;//This executes only ones;
//     c=c+1;          //Next time this will run ,the value of c will be retained
//     return a*b*c;
// }


// contant argument
// int strlen(const char *p){

// }
int main(){
    // int a, b;
    // cout<<"Enter the value of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is: "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<< moneyReceived(money)<<endl; 
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recieve "<< moneyReceived(money, 1.10)<<endl; 
    return 0;
}