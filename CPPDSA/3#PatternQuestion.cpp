#include <iostream>
using namespace std;

int main()
{
    // Pattern 3
    int n;
    cin >> n;
    int i = 1;
    // Patterns
    // 123
    // 123
    // 123
    /* while(i<=n){
         int j=1;
         while(j<=n){
             cout<<j<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }

 //    Patterns 4
     // 321
     // 321
     // 321
     while(i<=n){
         int j=1;
         while(j<=n){
             cout<<n-j+1<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }
 //    Patterns 5
     // 123
     // 456
     // 789
     int count = 1;
     while(i<=n){
         int j=1;
         while(j<=n){
             cout<<count<<" ";
             count++;
             j++;
         }
         cout<<endl;
         i++;
     }

     // Patterns 6
     // *
     // **
     // ***
     while(i<=n){
         int j=1;
         while(j<=i){
             cout<<"*"<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }


     // Patterns 7
     // 1
     // 22
     // 333
     while(i<=n){
         int j=1;
         while(j<=i){
             cout<<i<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }

     // Patterns 8
     // 1
     // 23
     // 456
     int count=1;
     while(i<=n){
         int j=1;
         while(j<=i){
             cout<<count<<" ";
             count++;
             j++;
         }
         cout<<endl;
         i++;
     }


     // Patterns 9
     // 1
     // 23
     // 345
     // int count=1; with extra variable
     while(i<=n){
         int j=1;
         int count=i;
         while(j<=i){
             cout<<count<<" ";
             count++;
             j++;
         }
         cout<<endl;
         i++;
     }

     // Patterns 9
     // 1
     // 23
     // 345
     // int count=1; without extra variable
     while(i<=n){
         int j=1;
         while(j<=i){
             cout<<i+j-1<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }


     // Patterns 10
     // 1
     // 21
     // 321
     // int count=1; with extra variable
     while(i<=n){
         int j=1;
         int count = i;
         while(j<=i){
             cout<<count<<" ";
             count--;
             j++;
         }
         cout<<endl;
         i++;
     }

     // Patterns 10
     // 1
     // 21
     // 321
     // int count=1; without extra variable
     while(i<=n){
         int j=1;
         while(j<=i){
             cout<<i-j+1<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }
     // Patterns 11
     // AAA
     // BBB
     // CCC
     while(i<=n){
         int j=1;
         while(j<=n){
             char ch = 'A'+ i-1;
             cout<<ch<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }
     // Patterns 12
     // ABC
     // ABC
     // ABC
     while(i<=n){
         int j=1;
         while(j<=n){
             char ch = 'A'+ j-1;
             cout<<ch<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }
     // Patterns 13
     // ABC
     // DEF
     // GHI
     int count = 0;
     while(i<=n){
         int j=1;
         while(j<=n){
             char ch = 'A'+ count;
             cout<<ch<<" ";
             count++;
             j++;
         }
         cout<<endl;
         i++;
     }
     // Patterns 14
     // ABC
     // BCD
     // CDE
      int count = 0;
     while(i<=n){
         int j=1;
         while(j<=n){
             char ch = 'A'+ i+j-2;
             cout<<ch<<" ";
             count++;
             j++;
         }
         cout<<endl;
         i++;
         count = i;

     }

    // Patterns 15
     // A
     // BB
     // CCC

     while(i<=n){
         int j=1;
         while(j<=i){
             char ch = 'A'+ i-1;
             cout<<ch<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }

    // Patterns 16
     // A
     // BC
     // DEF
      int count = 0;
     while(i<=n){
         int j=1;

         while(j<=i){
             char ch = 'A'+ count;
             cout<<ch<<" ";
             count++;
             j++;
         }
         cout<<endl;
         i++;
     }
    // Patterns 17
     // A
     // BC
     // CDE
     while(i<=n){
         int j=1;

         while(j<=i){
             char ch = 'A'+ j+i-2;
             cout<<ch<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }
    // Patterns 17
     // D
     // CD
     // BCD
     // ABCD
     while(i<=n){
         int j=1;

         while(j<=i){
             char ch = 'A'+ n-i+j-1;
             cout<<ch<<" ";
             j++;
         }
         cout<<endl;
         i++;
     }
 // Patterns 18
     //    *
     //   **
     //  ***
     // ****
     while(i<=n){
         int j=1;
         int space = n-i;
         while(space){
             cout<<" ";
             space--;
         }
         while(j<=i){
             cout<<"*";
             j++;

         }
         cout<<endl;
         i++;
     }
 // Patterns 19
     // ****
     // ***
     // **
     // *
     while(i<=n){
         int j=1;
         int space = n-i+1;
         while(space){
             cout<<"*";
             space--;

         }
         cout<<endl;
         i++;
     }

 // Patterns 20
     // ****
     //  ***
     //   **
     //    *
     while(i<=n){
         int j=1;
         int space = i-j;
         while(space){
             cout<<" ";
             space--;

         }
         while(j<=n-i+1){
             cout<<"*";
             j++;

         }
         cout<<endl;
         i++;
     }

 // Patterns 21
     // 111
     //  22
     //   3
     while(i<=n){
         int j=1;
         int space = i-j;
         while(space){
             cout<<" ";
             space--;

         }
         while(j<=n-i+1){
             cout<<i;
             j++;

         }
         cout<<endl;
         i++;
     }

 // Patterns 22
     //   1
     //  22
     // 333
     while(i<=n){
         int j=1;
         int space = n-i;
         while(space){
             cout<<" ";
             space--;

         }
         while(j<=i){
             cout<<i;
             j++;

         }
         cout<<endl;
         i++;
     }

 // Patterns 22
       1
      121
     12321
    1234321
     while(i<=n){
         int j=1;
         int k=1;
         int space = n-i;
         while(space){
             cout<<" ";
             space--;

         }
         while(j<=i){
             cout<<j;
             j++;

         }
         while(i>k){
             cout<<i-k;
             k++;

         }
         cout<<endl;
         i++;
     }
      */
    // Patterns 23
    // 123321
    // 12**21
    // 1****1

    while (i <= n)
    {
        int j = 1;
        int k = 1;
        int l = 1;
        int m = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        while (i > k)
        {
            cout << "*"
                 << " ";
            k++;
        }
        int star = i - l;
        while (star)
        {
            cout << "*"
                 << " ";
            star--;
        }
        int op = n - i + 1;
        while (m <= op)
        {
            cout << op - m + 1 << " ";
            m++;
        }

        cout << endl;
        i++;
    }

    return 0;
}