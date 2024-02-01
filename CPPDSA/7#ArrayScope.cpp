#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<"Inside the FUnction"<<endl;
    arr[0] = 120;
    // Printing the array
    for(int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main fucntion"<<endl;
}
int main(){
    int arr[3] = {1,2,3};
    update(arr,3);

    // Printing the array
    cout<<"Priting in main function"<<endl;
    for(int i = 0; i <3; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}