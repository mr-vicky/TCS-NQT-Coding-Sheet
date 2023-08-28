/*
Convert Decimal to Octal
Problem Statement: Given a decimal number, convert it into Octal Number.

Examples:

Example 1:
Input:  17
Output: 21
Explanation: Octal Equivalent of 17 is 21

Example 2:
Input:  45
Output: 55
Explanation: Octal Equivalent of 45 is 55
*/ 

#include<iostream>
#include<math.h>
using namespace std;

int decimal_to_octal(int decimal){
    int octal = 0;
    int i = 0;
    while(decimal != 0){
        int rem = decimal % 8;
        octal += rem * pow(10, i);
        i++; 
        decimal = decimal / 8;
    }
    return octal;
}

int main(){
    int decimal = 136;
    cout<<decimal_to_octal(decimal);
    return 0;
}