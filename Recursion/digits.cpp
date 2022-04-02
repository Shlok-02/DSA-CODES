#include <iostream>
#include <string>
using namespace std;

void Word(int n){
    string arr[10]={"zero","one","two",
    "three","four","five","six","seven","eight","nine"};
    cout<<arr[n]<<endl;
}

int digits(int n){

    if(n>0){
        int digit=n%10;
        n=n/10;
        //Word(digit); //here the order reverses as it happens at  exec time
        digits(n);
        Word(digit); //here the order is right as it happens during returning time
    }
    return 0;
}

int main(){
    digits(4121);
}