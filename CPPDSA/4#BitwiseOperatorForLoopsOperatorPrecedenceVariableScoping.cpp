#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    // Bitwise Operator --> &, |, ~, ^
    cout<<"a&b:  "<<(a&b)<<endl;
    cout<<"a|b:  "<<(a|b)<<endl;
    cout<<"a^b:  "<<(a^b)<<endl;
    cout<<"~a:  "<<(~a)<<endl;

    // Left SHift-->'<<'--> Increasing value, RIght SHift-->'>>'-->Decresisng value
    cout<<(17>>1)<<endl;
    cout<<(3>>2)<<endl;
    cout<<(19<<3)<<endl;
    cout<<(21<<4)<<endl;

    // Pre/Post Increment, Pre/Post Decrement
    int n= 7;
    // Pre Increment
    cout<<(++n)<<endl;
    // Post Increment
    cout<<(n++)<<endl;
    // Post Decrement
    cout<<(n--)<<endl;
    // Pre Decrement
    cout<<(--n)<<endl;


    int count;
    cout<<"ENter a number: "<<endl;
    cin>>count;
    cout<<"Printing Nuber from 1 to n"<<endl;
    for(int i = 1; i<=count;i++){
        cout<<i<<endl;
    }


    // for loop with multiple variables
    cout<<"for loop with mulitple variables"<<endl;
    for(int x=0, y=1, z=2; x>=0 && y>=1 && z>=2; x--,y--,z--){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }

    // sum of n numbers
    cout<<"Sum of n numbers: "<<endl;
    int sum = 0;
    for(int j = 1; j<=count; j++){
        sum += j;
    }
    cout<<sum<<endl;

    // fibonacci series using for loop
    cout<<"Fibanacci Series upto n number: "<<endl;
    int num1 = 0, num2 = 1;
    cout<<num1<<" "<<num2<<" ";
    for(int k=1; k<=count; k++){
        int nextNum = num1+num2;
        cout<<nextNum<<" ";
        num1 = num2;
        num2 = nextNum;
    }

    // Prime Number Using For loop
    // Using break->> will stop the loop or process
    cout<<endl<<"Prime Number check: "<<endl;
    bool is_Prime = 1;
    for (int pr = 2; pr<count; pr++){
        if(count%pr == 0){
            cout<<"Not a prime Number"<<endl;
            is_Prime = 0;
            break;
        }
    }
    if(is_Prime == 1){
        cout<<"Prime Number"<<endl;
    }

    // Continue Keyword--> will skip the next processes
    cout<<"Continue Keyword check"<<endl;
    for(int cont = 0; cont <15; cont+=2){
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        // cout<<cont<<" ";
        // if(cont&1){
        //     continue;
        // }
        // cont++;
        continue;
        cout<<"No reply"<<endl;
    }

    // Variable & scope
    cout<<"Variable and scope check:"<<endl;
    int num = 3;
    cout<<num<<endl;
    if(true){
        int num = 4;
        cout<<num<<endl;
    }
    cout<<num<<endl;
    int forNum = 8;
    for(; forNum < 8; forNum++){
        cout<<forNum<<" ";
    }

    // Operator Precedence
    return 0;
}