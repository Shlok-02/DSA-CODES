#include<iostream>
using namespace std;

//here macro are defined
#define PI 3.14
#define CH 'c'
//they dont take space and before compiling its all instances are replaced by  the value in code

#define Area(l,b) (l*b)
//here the first bracket takes arguments and second barcket returns the value

#define min(a, b) (((a) < (b)) ? (a) : (b))

int main(){

    cout<<PI<<endl;
    cout<<CH<<endl;
    cout<<Area(2,3)<<endl;
    cout<<min(12,33)<<endl;
   // PI++; //error
}