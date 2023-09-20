# include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
// Calculate the valume of cylinder
int volume(double r, int h){
    return (3.14 *r*r*h);
}

// Calculate the valume of a cube
int volume(int a){
    return (a*a*a);
}
// Calculate the valume of Ractangular box
int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cuboid 3, 7 and 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cube of side 3  "<<volume(3)<<endl;

    return 0;
}