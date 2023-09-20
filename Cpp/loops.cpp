#include<iostream>
using namespace std;
int main(){
    /*
    Loops in C++:
    There are three types of loops in c++;
    1. For Loop
    2. While Loop
    3. do-While Loop
    */

//    For loop
// syntax for for loop
    // for(initializatio; condiation; updation){
    //     Loop body(C++ code);
    // }

    // for(int i = 1; i <= 40; i++){
    //     cout<<i<<endl;

    // }

    // Exmaple of infinite for loop
    // for(int i = 1; 34<=50; i++){
    //     cout<<i<<endl;
    // }

    // While Loop in c++
    // Syntax:
    // while(condition){
    //     C++ statement
    // }
    
    // Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }


    //Example of infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

     // do-While Loop in c++
    // Syntax:
    // do{
    //     C++ statement;
    // }while(condition);

    // Printing 1 to 40 using while loop
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);
    return 0;
}