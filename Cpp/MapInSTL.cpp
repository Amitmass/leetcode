#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Rohan"] = 45;
    marksMap["Rohit"] = 56;

    marksMap.insert({{"Kozume", 200}, {"Kuroo", 300}});
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin(); iter != marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The size is: "<<marksMap.max_size()<<endl;
    cout<<"The size is: "<<marksMap.empty()<<endl;
    return 0;
}