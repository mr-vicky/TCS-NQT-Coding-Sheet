/*
Convert Octal to Binary
Problem Statement: Given an Octal Number, convert it into Binary Number.

Examples:

Example 1:
Input: 345
Output: 011100101
Explanation: Binary equivalent of given Octal expressionis 011100101

Example 2:
Input: 170
Output: 001111000
Explanation: Binary equivalent of given Octal expression is 001111000
*/ 

#include<iostream>
#include<math.h>
using namespace std;

int convert_octal_to_decimal(int octal){
    int decimal = 0;
    int i = 0;
    while(octal > 0){
        int rem = octal % 10;
        decimal += rem * pow(8, i);
        i++;
        octal = octal / 10;
    }
    return decimal;
}

int convert_octal_to_binary(int octal){
    int decimal = convert_octal_to_decimal(octal);
    int binary = 0;
    int i = 0;
    while(decimal != 0){
        int rem = decimal % 2;
        binary += (rem * pow(10, i));
        i++;
        decimal = decimal / 2;
    } 
    return binary;
}

int main(){
    int octal = 345;
    cout<<convert_octal_to_binary(octal);
    return 0;
}