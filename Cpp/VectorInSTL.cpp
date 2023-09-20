#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    // Ways to creqate a vector
    vector<int> vec1; // zero length integer vector
    
    int element, size;
    // cout<<"Enter the size of your vector: "<<endl;
    // cin>>size;
    // for(int i = 0; i < size; i++){
    //     cout<<"Enter an element to add to this vector: "<<endl;
    //     cin>>element;
    //     vec1.push_back(element); // Insert an element
    // }
    // // vec1.pop_back(); // Delete last element
    // display(vec1);
    // vector<int> :: iterator iter =vec1.begin();
    // vec1.insert(iter+1, 5000, 500);
    // display(vec1);


    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('5');
    // display(vec2);
    // vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);
    vector<int> vec4(6, 3);
    display(vec4);
    cout<<vec4.size()<<endl;
    return 0;
}