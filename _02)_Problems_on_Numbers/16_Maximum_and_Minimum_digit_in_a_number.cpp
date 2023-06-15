/*
Maximum and Minimum Digit in a Number
Problem Statement: Given a number N, print the smallest and largest digits present in the number.

Examples:

Example 1:
Input: N = 2746
Output: Largest digit: 7
        Smallest digit: 2
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.

Example 2:
Input: N = 23004
Output: Largest digit : 4
        Smallest digit : 0
Explanation: By simply going through the digits of 
the number, we figure out the largest and smallest 
digit in the number.
*/ 

#include<bits/stdc++.h>
using namespace std;

void get_max_and_min_digit(int num){
    vector<int>arr;
    while(num>0){
        arr.push_back(num%10);
        num/=10;
    }
    sort(arr.begin(), arr.end());
    cout<<"Smallest Digit: "<<arr[0]<<endl<<"Largest Digit: "<<arr[arr.size()-1]<<endl;
}

int main(){
    int num = 1925;
    get_max_and_min_digit(num);
    return 0;
}