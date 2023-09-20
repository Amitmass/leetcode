#include<iostream>
using namespace std;

int main(){
    // Array Examples
    int marks[]={20,30,40,50};
    int mathMarks[4];
    mathMarks[0] = 190;
    mathMarks[1] = 290;
    mathMarks[2] = 390;
    mathMarks[3] = 490;

    cout<<"These are the Math marks: "<<endl;
    
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<"These are marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // You can change the value of an array

    marks[2]=466;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // Print array values using for loop
    for(int i=0; i<4;i++){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // Print array values using While loop
    int i=0;
    while(i<4){
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }

    // Print array values using do-While loop
    i = 0;
    do{
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<4);

    // pointers and arrays
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}