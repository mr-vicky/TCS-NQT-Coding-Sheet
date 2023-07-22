/*
Convert Binary to Decimal
Problem Statement: Convert a binary number to a decimal number.

Examples:

Example 1:
Input: N = 1011
Output: 11
Explanation: 1011 when converted to decimal number is “11”.

Example 2:
Input: 100
Output: 4
Explanation: 100 when converted to decimal number is “4”.
*/ 

#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int num){
    int i=0; 
    int res=0;
    while(num>0){
        int temp = num%10;
        res+=pow(2, i)*temp;
        i++;
        num/=10;
    }
    return res;
}

int main()
{
    int num=0;
    cin>>num;
    cout<<binaryToDecimal(num);
    return 0;
}
