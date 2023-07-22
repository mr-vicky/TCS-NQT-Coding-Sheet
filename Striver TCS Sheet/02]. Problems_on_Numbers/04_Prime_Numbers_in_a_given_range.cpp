/*
Prime Numbers in a given range
Problem Statement: Given a and b, find prime numbers in a given range [a,b], (a and b are included here).

Examples:

Examples:
Input: 2 10
Output: 2 3 5 7 
Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.

Example 2:
Input: 10 16
Output: 11 13 
Explanation: Prime Numbers b/w 10 and 16 are 11 and 13.
*/ 

#include<bits/stdc++.h>
using namespace std;

void getPrimeNumbers(int a, int b){
    for(int n=a; n<=b; n++){
        int flag = true;
        for(int j=2; j<n; j++){
            if(n%j==0){
                flag = false;
            }
        }
        if(n!=1 && flag==true)
            cout<<n<<" ";
    }
}

int main(){
    int a = 19 , b = 25;
    getPrimeNumbers(a, b);
    return 0;
}