/*
Calculate the Area of the Circle
Problem Statement: Given the radius of the circle, calculate the area of the circle.

Examples:

Example 1:
Input: N = 5
Output: 78.5
Explanation: Using formula  πr2 for finding area of circle we get area as 78.5

Example 2:
Input: N = 4
Output: 50.2
Explanation: Using formula  πr2 for finding area of circle we get area as 50.2
*/ 

#include<iostream>
using namespace std;

double getAreaOfCircle(double r){
    return 3.14*r*r;
}

int main()
{
    int r = 5;
    cout<<getAreaOfCircle(r)<<endl;
    cout<<getAreaOfCircle(4)<<endl;
    return 0;
}
