#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENter YOur Age: "<<endl;
    cin>>age;

    // Selection Control structure: if-else-if-else ladder
    if(age<18 && age > 0){
        cout<<"You can't come to the party."<<endl;
    }else if(age==18){
        cout<<"You will get the kid pass"<<endl;
    }else if(age <1){
        cout<<"You are just born."<<endl;
    }else{
        cout<<"You can come to the party."<<endl;
    }

     // Selection Control structure: Switch case Statement
     switch (age)
     {
     case 18:
        cout<<"You are 18"<<endl;
        break;
     case 22:
        cout<<"You are 22"<<endl;
        break;
     case 2:
        cout<<"You are 2"<<endl;
        break;

     default:
        cout<<"No age"<<endl;
        break;
     }
    return 0;
}