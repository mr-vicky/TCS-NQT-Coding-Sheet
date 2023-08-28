/*
Convert Decimal to Binary Number
Problem Statement: Convert decimal to binary number.

Examples:

Example 1:
Input: N = 15
Output: 1111
Explanation: 15 in binary is represented as "1111".

Example 2:
Input: 18
Output: 10010
Explanation: 18 in binary is represented as "10010".
*/ 

#include<iostream>
using namespace std;

void decimal_to_binary(int n){
    int binary[32] = {0};
    int i = 0;
    while(n){
        binary[i] = n%2;
        i++;
        n /= 2;
    }
    
    int res = 0;
    for(int ind = i-1; ind>=0; ind--){
        cout<<binary[ind];
    }
}

int main(){
    int n = 28;
    decimal_to_binary(n);
    return 0;
}