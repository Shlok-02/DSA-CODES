#include <bits/stdc++.h>
using namespace std;

int main(){
    /* char ch[5]="abcde"; //error  */
   /*  char ch[6]="abcde";
    char *ptr=&ch[0];

    cout<<"Value in ptr:- "<<(*ptr)<<endl;
    cout<<"address in ptr:- "<<(ptr)<<endl; //imp
    cout<<"address of char:- "<<(&ch)<<endl;



     char temp = 'z';
    char *p = &temp;

    cout << p << endl; */


     char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
}