#include<iostream>
using namespace std;
int getSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int num[100];

    for(int i=0; i<size;i++){
        cin>>num[i];
    }
    // Priting sum
    cout<<"SUm of all the elements: " << getSum(num, size) <<endl;
    return 0;
}