#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;  // here addr of p inc as it add 1 into it
    //kuch change hoga - YES  

    **p2 = **p2 + 1; //here the value changes as it goes 2 level inside and incremenmts
    //kuch change hoga - YES
}
    void update(int *p){
        *p = (*p)  *  2;
    }
        void increment(int **p){
        ++(**p);
    }
int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;
    cout<< endl << endl << endl << endl ;

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout<<endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout<<endl;

    cout << &p << endl;
    cout << p2 << endl;

    cout << endl << endl;


    
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;

    update(p2);

    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;

    cout << endl << endl;



    return 0;
}