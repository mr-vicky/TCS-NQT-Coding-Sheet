/*
Check whether a given number is even or odd
Problem Statement: Given a number n, check whether a given number is even or odd.

Examples:

Example 1:
Input: n=5
Output: odd
Explanation: 5 is not divisible by 2.
 
Example 2:  
Input: n=6
Output: even
Explanation: 6 is divisible by 2.
*/
#include<bits/stdc++.h>
using namespace std;

void isOddOrEven(int n){
    if(n%2==0)
        cout<<n<<" is even";
    else 
        cout<<n<<" is odd";
}

int main() {
    int n = 1925;
    isOddOrEven(n);
  }