/*
Sum Of Digits of A Number
Problem Statement: Given an integer, find the sum of digits of that integer.

Examples:

Example 1:
Input: N = 472
Output: 13
Explanation: The digits in the number are 4,7 and 2. Summing them up gives us a value of 13

Example 2:
Input: N = 102
Output: 3
Explanation: The digits in the number are 0, 1, and 2. Summing them up gives us a value of 3
*/ 

#include<bits/stdc++.h>
using namespace std;

void getSumOfDigits(int num){
    vector<int>arr;
    int sum = 0;
    while(num>0){
        arr.push_back(num%10);
        num/=10;
    }
    cout<<accumulate(arr.begin(), arr.end(), sum)<<endl;
}

int main()
{
    int num = 1925;
    getSumOfDigits(num);
    getSumOfDigits(9999);

    return 0;
}
