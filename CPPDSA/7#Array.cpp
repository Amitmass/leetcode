#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    cout<<"Printing Array"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printing done"<<endl<<endl;
}
int main(){

    int number[15];
    // number[20] = 12;
    // cout<<"size of array length "<<sizeof(number) / sizeof(int)<<endl;
    cout<<"Value at 14 index "<<number[14]<<endl;
    // cout<<"Value at 20 index "<<number[20]<<endl;

    // initializing an array
    int second[3] = {5, 7, 11};

    // accessing the element
    cout<<"VAlue at index 2: "<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 15;

    // printArr(third, n);

    // size of an array
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of the third array is: "<<thirdSize<<endl;

    // initializing all locations with 0;
    int fourth[10] = {0};
    n = 10;
    printArr(fourth, n);

    // initializing all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    n = 10;
    printArr(fifth, n);
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of the fifth array is: "<<fifthSize<<endl;

    char ch[5] = {'a','b','c', 'd','e'};
    cout<<ch[3]<<endl;
    cout<<"printing the array"<<endl;
    for(int i=0; i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl<<"Printing done"<<endl<<endl;

    return 0;
}