#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is: "<<id<<endl;
            cout<<"Price of this item is: "<<price<<endl;
        }

};
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    Shop *ptr = new Shop [size];
    Shop *ptrTemp = ptr;
    int p, i;
    float q;
    for(i=0; i<size; i++){
        cout<<"Enter the Id and price of the Item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        // ptr->getData();
        ptr++;
    }
    for(i = 0; i<size; i++){
        cout<<"Item Number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}