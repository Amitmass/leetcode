#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
}

void update(int n){
    n = n/2;
}

int update2(int n){
    n -= 5;
    return n;
}

int update3(int n){
    int ans = n * n;
    return ans;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"Number is: "<<n<<endl;

    update(n);
    cout<<"Number is: "<<n<<endl;

    update2(n);
    cout<<"Number is: "<<n<<endl;

    n = update3(n);
    cout<<"Number is: "<<n<<endl;
    return 0;

}