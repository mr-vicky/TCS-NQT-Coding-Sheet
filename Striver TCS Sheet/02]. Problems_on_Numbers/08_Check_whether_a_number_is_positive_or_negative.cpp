/*
Check whether a number is positive or negative
Problem statement: Given a number n check whether it’s positive or negative.

Examples:

Example 1:
Input: n=5
Output: Positive

Example2:
Input: n=-6
Output: Negative
*/ 

#include<bits/stdc++.h>
using namespace std;

void check(int n){
    if(n<0) cout<<n<<" is -ve"<<endl;
    else cout<<n<<" is +ve"<<endl;
}

int main() {

int n = 1925;
check(n);
n = -6;
check(n);
}