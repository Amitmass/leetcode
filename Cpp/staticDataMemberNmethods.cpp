#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the employee Id: "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the employee is "<<id<<" and the is employee number "<<count<<endl;
        }
        static void getCount(void){
            // cout<<id; // Will thow error
            cout<<"The value of count: "<<count<<endl;
        }
};

int Employee::count;//  Default value is 0; We can start counter form any number by givin default valur here
int main(){

    Employee harry, rohan, lovish;

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    
    return 0;
}