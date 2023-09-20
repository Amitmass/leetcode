#include<iostream>
using namespace std;
template<class T>
class MyClass{
    public:
        T data;
        MyClass(T a){
            data = a;
        }
        void display();
};

template<class T>
void MyClass<T> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func(): "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am templatised func(): "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"I am templatised func(): "<<a<<endl;
}
int main(){
    // MyClass<int> v1(2);
    // MyClass<char> v1('r');
    // MyClass<float> v1(2.33);
    // cout<<v1.data<<endl;
    // v1.display();

    func(4);
    func1(4);
    return 0;
}