/*
Check if a number is Automorphic Number
Problem Statement: Given a number, check if it is automorphic or not. A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.

Examples:

Example 1:
Input Format: N = 76
Result: Automorphic Number
Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.

Input Format: 25
Result: Automorphic Number
Explanation: Calculating 25 * 25 gives 625, it ends with the given number.
*/ 

#include<bits/stdc++.h>
using namespace std;

void isAtomorphicNumber(int n){
    vector<int>arr1, arr2;
    int temp = n;
    int count = 0;

    while(temp>0){
        arr1.push_back(temp%10);
        temp/=10;
    }
    int size = arr1.size();
    int product = n*n;

    while(size--){
        arr2.push_back(product%10);
        product/=10;
    }
    // INCOMPLETE
}

int main()
{
    int N = 76;
    isAtomorphicNumber(N);
    return 0;
}