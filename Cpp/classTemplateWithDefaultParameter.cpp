#include<iostream>
using namespace std;
template <class T1=int, class T2=float, class T3=char>
class MyClass{
    public:
        T1 a;
        T2 b;
        T3 c;
        MyClass(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
        }
};
int main(){
    MyClass<> vc(5, 5.5, 't');
    vc.display();
    cout<<endl;
    MyClass<char, int, float> tc('y', 5, 4.5);
    tc.display();
    return 0;
}