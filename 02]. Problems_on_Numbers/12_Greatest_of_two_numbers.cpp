/*
Greatest of two numbers
Problem Statement: Given two numbers. Find the greatest of two numbers.

Examples:

Example 1:
Input: 1 3
Output: 3
Explanation: Answer is 3,since 3 is greater than 1.

Input: 1.123  1.124
Output: 1.124
Explanation: Answer is 1.124,since 1.124 is greater than 1.123.

*/ 

#include<bits/stdc++.h>
using namespace std;

void getLargest(int a, int b){
    cout<<"Greatest number is "<<max(a, b)<<endl;
}
int main() {
	int num1 = 19, num2= 25;
	getLargest(num1, num2);
}