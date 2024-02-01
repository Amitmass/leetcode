#include<iostream>
using namespace std;

int power(int num1, int num2){
        int ans = 1;

        for(int i = 1; i <= num2; i++){
                ans = ans * num1;
        }
        return ans;
}
int main(){
    
    int num = 1;
        // switch case
    switch(num){
        case 1:
                cout<<"First Data"<<endl;
                break;
        case 2:
                cout<<"Second Data"<<endl;
                break;
        default:
                cout<<"No Value found"<<endl;
    }

//     Functions
        int a, b;
        cin>>a>>b;
        int answ = power(a,b);
        cout<<"answer is: "<<answ<<endl;
   
    return 0;
}