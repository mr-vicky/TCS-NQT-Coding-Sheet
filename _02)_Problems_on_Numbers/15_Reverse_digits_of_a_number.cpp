/*
Reverse digits of a number
Problem Statement: Given an integer. Write a program to reverse digits of a number.

Examples:

Example 1:
Input: N = 472
Output: 274
Explanation: Reading the number from back to front, we see that the output should be 274

Example 2:
Input: N = 470
Output: 74
Explanation: Reading the number from back to front, we get 074. For an integer with no decimals, we know that leading zeros have no significance and therefore our answer should be 74
*/ 
#include<bits/stdc++.h>
using namespace std;

int reverseDigits(int num){
    vector<int>arr;
    int res=0;
    while(num>0){
        arr.push_back(num%10);
        num/=10;
    }

    for(int i=0; i<arr.size(); i++){
        res = res*10 + arr[i];
    }
    cout<<endl;
    return res;

}

int main(){
    int num = 1925;

    cout<<reverseDigits(num);
    int num2 = 470;
    cout<<reverseDigits(num2);
}