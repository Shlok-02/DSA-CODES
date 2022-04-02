#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
    int age;
    int weight;


    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Dog:public Animal{
    public:
        void DogName(){
            cout<<"Tommy is the name of dog"<<endl;
        }
};

int main(){
    Dog d;

    d.age=10;
    d.weight=23;

    cout<<d.age<<" "<<d.weight<<endl;

    d.DogName();
}