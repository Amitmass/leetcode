#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("smapleFiles.txt");
    out<<"This is me\n";
    out<<"This is meme\n";
    out<<"This is mean\n";
    out<<"This is means\n";
    out.close();

    ifstream in;
    string st, st2;
    in.open("smapleFiles.txt");
    
    // read word by word
    // in>>st>>st2;
    // cout<<st<<st2;

    // Read the whole file
    while(in.eof() == 0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}