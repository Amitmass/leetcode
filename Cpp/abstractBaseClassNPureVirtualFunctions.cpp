#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0; // do-nothing function--> pure virtual function
};

class CWHVideo :public CWH{
    float videolength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title: "<<title<<endl;
            cout<<"Ratings: "<<rating<<" OUT of 5 stars"<<endl;
            cout<<"Length oft this video is: "<<videolength<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title: "<<title<<endl;
            cout<<"Ratings: "<<rating<<" OUT of 5 stars"<<endl;
            cout<<"No. of words in this text tutorial is: "<<words<<endl;
        }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // For CWH video
    title = "Django tutorial Video";
    rating = 4.86;
    vlen = 4.45;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();


    // For CWH video
    title = "Django tutorial Text";
    rating = 4.19;
    words = 345;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH * tuts[2];

    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}


/* 
Rules for Virtual function
1. They cannot be static
2. They are accessed bu object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class , there is no necessity of refining it in the derived class.
*/