#include<iostream>
using namespace std;

int main(){
    // Conditional Loops--> IF-ELSE IF-ELSE, Switch

    // int a, b;
    // cout<<"Enter number :"<<endl;

    // If-ELSE COndition
/*    cin>>a;
    if(a>0){
        cout<<"N is positive"<<endl;
    }else{
        cout<<"N is negative"<<endl;

    }
    // cin>>a>>b; // Tab, space and enter will not be taken as input

    // a = cin.get(); // This will take all the value form keyboard and give the response as ascii number

    int a, b;
    cout<<"ENter the vlaue of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    // If condition
    if(a>b){
        cout<<"A is bigger"<<endl;
    }
    if(b>a){
        cout<<"B is bigger"<<endl;
    }
   
    // IF-ELSE IF-ELSE
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    if(a>0){
        cout<<"Number is Positive"<<endl;
    }else if(a<0){
        cout<<"Number is negative"<<endl;
    }else{
        cout<<"Number is neutral"<<endl;
    }
    */

    // Looping While, For, do-while

    int n;
    cin>>n;
    int i = 1;
    // count
   /* while(i<=n){
        cout<<i<<" ";
        i++;
    }
//    Sum of n numbers
    // Formula sum = n/2 *(a+n)
    int sum = 0;
    while(i<=n){
        sum += i;
        i++;
    }
    cout<<"SUM: "<<sum<<endl;

//    Even number sum
    int evensum = 0;
    while(i<=n){
        if(i%2==0){
            evensum += i;
        }
        i++;
    }
    cout<<"Total: "<<evensum<<endl;

//  Prime Number check 
    int prime = 1;
    int j = 2;
    while(j<n){
        if(n%j==0){
            prime = 0;
            cout<<"Number is Not Prime"<<endl;
            break;
        }
        j++;
    }
    if(prime == 1){
        cout<<"Number is Prime"<<endl;
    }

    // Patterns
    // Star Pattern 1--> 3x3
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

//    Pattern 2 --> 
    // 111
    // 222
    // 333
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}