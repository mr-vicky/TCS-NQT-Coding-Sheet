/*
Check whether a number is Perfect Number or not
Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 

Examples:

Example 1:
Input: n=6
Output: 6 is a perfect number

Example 2:
Input: n=15
Output: 15 is not a perfect number

Example 3:
Input: n=28
Output: 28 is a perfect number
Reason:
For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.
*/ 
#include<bits/stdc++.h>
using namespace std;

void isPerfect(int n){
    vector<int>arr;
    for(int i=1; i<n; i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }

    int sum = 0;
    sum = accumulate(arr.begin(), arr.end(), sum);
    if(sum == n){
        cout<<n<<" is perfect number"<<endl;
    }
    else {
        cout<<n<<" is not a perfect number"<<endl;
    }
}

int main()
{
    int n = 9;
    isPerfect(n);
    isPerfect(15);
    isPerfect(28);
    isPerfect(1925);
    return 0;
}
