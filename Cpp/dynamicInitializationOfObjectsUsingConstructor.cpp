#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r); // r can be value like 0.07
    BankDeposit(int p, int y, int r); // r can be value like 14
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;

    for(int i = 0; i<y; i++){
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show(){
    cout<<endl<<"Principal amount was "<<principal
    <<". Return value after "<<years
    << " years is "<<returnValue<<endl;
}
int main(){
    BankDeposit b1, b2, b3;
    int p,y;
    float r;
    int R;
    cout<<"ENter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    b1 = BankDeposit(p,y,r);
    b1.show();
    cin>>p>>y>>R;
    b2 = BankDeposit(p,y,R);
    b2.show();
    return 0;
}