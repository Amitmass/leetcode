#include<iostream>
using namespace std;

int main(){
    // Switch case
    int num1, num2;
    char op;
    cout<<"Enter the first and second:"<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation you want: "<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(num1 + num2)<<endl;
                break;
        case '-': cout<<(num1 - num2)<<endl;
                break;
        case '*': cout<<(num1 * num2)<<endl;
                break;
        case '/': cout<<(num1 / num2)<<endl;
                break;
        case '%': cout<<(num1 % num2)<<endl;
                break;
        default:
            cout<<"No operations found"<<endl;
            break;
    }
    int num, hundread, fifty, twenty, ten;
        cin>>num;
    switch(1)
    {
        case 1: hundread = num/100;
                    cout << hundread << endl;
                    num = num - hundread*100;

        case 2: fifty = num/50;
                    cout << fifty << endl;
                    num = num - fifty*50;

        case 3: twenty = num/20;
                    cout << twenty << endl;
                    num = num - twenty*20;

        case 4: ten = num/10;
                    cout << ten << endl;
                    num = num - ten*10;
    
    }  

    return 0;
}