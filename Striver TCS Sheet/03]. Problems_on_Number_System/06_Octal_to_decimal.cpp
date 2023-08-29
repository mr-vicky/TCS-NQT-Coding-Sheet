/*
Convert Octal to Decimal
Problem Statement: Given an Octal Number, convert it into a Decimal Number.

Examples:

Example 1:
Input: 345
Output: 229
Explanation: Decimal equivalent of given Octal expressionis 229

Example 2:
Input: 170
Output: 121
Explanation: Decimal equivalent of given Octal expression is121
*/ 

#include<iostream>
#include<math.h>
using namespace std;

int convert_octal_to_decimal(int octal){
    int decimal = 0;
    int i = 0;
    while(octal != 0){
        int rem = octal % 10;
        decimal += rem * pow(8, i);
        i++;
        octal = octal / 10;
    }
    return decimal;
}

int main(){
    int octal = 345;
    cout<<convert_octal_to_decimal(octal);
    return 0;
}