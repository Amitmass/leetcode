#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public :
        void setId(void){
            salary = 122;
            cout<<"ENter the employee id: "<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"The id of the this emplopyee is: "<<id<<endl;
        }
};
int main(){
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();

    Employee emp[4];
    for(int i = 0; i<4; i++){
        emp[i].setId();
        emp[i].getId();
    }
    return 0;
}