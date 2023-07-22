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

#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int num){
    int binary[32]={0};
    int i=0;
    while(num){
        binary[i]= num%2;
        i++;
        num/=2;
    }
    return 0;

}

int main()
{
    int num=0;
    cin>>num;
    cout<<decimalToBinary(num);
    return 0;
}
