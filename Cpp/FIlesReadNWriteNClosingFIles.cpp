#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Connecting our file with hout stream
    ofstream hout("smapleFiles.txt");
    // Creating a nmae string and filling it with the string entered by the user
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;

    // Writing a string to the file
    hout<<"My name is: "+ name;
    hout.close();

    ifstream hin("smapleFiles.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content<<endl;
    hin.close();
    return 0;
}