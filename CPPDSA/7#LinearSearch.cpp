#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {10,12,-98,24,-33,97,63,87,6,3};
    cout<<"Enter element for the search: "<<endl;
    int key;
    cin>>key;
    bool found = search(arr, 10, key);
    if(found){
        cout<<"key is present"<<endl;
    }else{
        cout<<"Key is absent"<<endl;
    }
    return 0;
}