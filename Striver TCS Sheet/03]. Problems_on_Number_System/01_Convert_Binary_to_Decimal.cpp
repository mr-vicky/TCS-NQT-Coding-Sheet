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
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
using namespace std;

// Method 1: 
// TC: O(n) n = No. of Digits in the number
// SC: O(n) n = No. of Digits in the number
int convert_to_decimal1(int N){
    vector<int>v;
    int res = 0;
    while(N>0){
        v.push_back(N%10);
        N /= 10;
    }

    for(int i=0; i<v.size(); i++){
        if(v[i]==1){
            res += pow(2, i);
        }
    }
    return res;
}

int convert_to_decimal2(string M){
    int res = 0;
    int base = 1;
    int n = M.length();
    for(int i=n-1; i>=0; i--){
        if(M[i] == '1')
            res += base;
        base *= 2;
    }
    return res;
}


int main(){
    int N = 1011;
    cout<<convert_to_decimal1(N)<<endl;

    // Method 2: 
    // Get the input in the string formal 
    string M = "1011";
    cout<<convert_to_decimal2(M);
    return 0;
}
