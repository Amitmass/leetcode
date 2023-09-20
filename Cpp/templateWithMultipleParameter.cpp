#include<iostream>
using namespace std;
/*
CLASS TEMPLATE WITH MULTIPLE PARAMETER (ONE, TWO OR MORE THAN TWO)
template<class T1, class T2.....(COMMA SEPARATED)>
class nameOfClass{
    // body
}
*/
template<class T1, class T2>
class MyClass{
    public:
        T1 data1;
        T2 data2;
        MyClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<" : "<<this->data2<<endl;
        }
};
int main(){
    MyClass<int, char> vc(2, 'h');
    vc.display();
    return 0;
}