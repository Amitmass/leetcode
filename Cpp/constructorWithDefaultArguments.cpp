#include<iostream>
using namespace std;
class Simple{
    int data1, data2;
    public:
    Simple(int a, int b = 9){
        data1 = a;
        data2 = b;
    }

    void printNumber();
};

void Simple :: printNumber(){
    cout<<"The value of data1 and data2 are "<<data1<<" and "<<data2<<endl;
}
int main(){
    Simple s1(2,5);
    s1.printNumber();

    Simple s2(2);
    s2.printNumber();
    return 0;
}