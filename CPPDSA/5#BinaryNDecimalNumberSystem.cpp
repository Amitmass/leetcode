#include<iostream>
#include<math.h>
using namespace std;

int main(){
     int n;
    cin >> n;

    int i = 0;

    // Decimal To Binary
    float ans  = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    // Binary to Decimal
    // int ans = 0;
    // while(n !=0 ){

    //     int digit = n % 10;
    //     if(digit == 1){
    //         ans = ans + pow(2, i);
    //     }
    //     n = n/10;
    //     i++;
    // }

    cout<<" Answer is " << ans << endl;
    return 0;
}