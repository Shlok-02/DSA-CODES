/* to count prime numbers below a given numbers
eg:- n=10;
count =4 (2,3,5,7)

we are using sieve of gratasthenus

1. here all numbers excluding 0,1 are marked as prime numbers
2. we iterate from 2 to n-1 and mark the number in their table(mutiples) as unprime and inc count
eg:- numbers after i.e 4,6,8 .. till n are all marked unprime for 2
similarly for other remianing marked  prime numbers */

#include<iostream>
#include<vector>
using namespace std; 



int countPrimes(int n) {
        
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
        
    int counter=0;
        
    for(int i=2;i<n;i++){
        if(prime[i]){
            counter++;
                
            for(int j=2*i;j<n;j+=i){
                prime[j]=0;
            }
        }
    }
    return counter;
}


int main(){
    cout<<countPrimes(40)<<endl;
}