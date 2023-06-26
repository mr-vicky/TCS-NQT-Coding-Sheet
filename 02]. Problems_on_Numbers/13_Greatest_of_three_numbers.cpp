/*
Greatest of three numbers
Problem Statement: Given three numbers. Find the greatest of three numbers.

Examples:

Example 1:
Input: 1 3 5
Output: 5
Explanation: Answer is 5.Since 5 is greater than 1 and 3.

Example 2:
Input: 1.123  1.124 1.125
Output: 1.125
Explanation: Answer is 1.125. Since 1.125 is greater than 1.123 and 1.124
*/ 

#include<iostream>
using namespace std;

void getLargest(double a, double b, double c){
    double sec_largest = max(a, b);
    double largest = max(c, sec_largest);
    cout<<"Largest number is "<<largest<<endl;
}

int main()
{
    double num1 = 19.25, num2= 25.19, num3 = 71.10;
    getLargest(num1, num2, num3);
    return 0;
}
