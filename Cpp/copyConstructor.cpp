#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){
        a = 0;
    }
    Number(int num){
        a = num;
    }
    // When no copy constructor  is found, compiler supplies its own copy constrcutor
    Number(Number &obj){
        cout<<"Copy Constructor called: ";
        a = obj.a;
    }

    void display(){
        cout<<"The number for this object is: "<<a<<endl;
    }
};
int main(){
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z); //  Copy Constructor invoked
    z1.display();
    // z1 should  exactly resemble z or y or x;

    z2 = z; // COpy constructor not called

    Number z3 = z; // Copy Constructor Invoked
    return 0;
}