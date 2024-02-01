#include<iostream>
using namespace std;
// 1->prime
// 0->not prime

bool isPrime(int num){
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}