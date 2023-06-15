/*
Find the sum of numbers in the given range
Problem Statement: Find the sum of numbers in the given range.

Examples:

Example 1:
Input: l=2, r=7
Output: 27
Explanation: 2+3+4+5+6+7=27. Therefore 27 is the answer.

Example 2:
Input: l=5, r=9
Output: 35
Explanation: 5+6+7+8+9=35. Therefore 35 is the answer.
*/ 
#include<iostream>
using namespace std;

void getSum(int l, int r){
    int sum = 0;
    for(int i=l; i<=r; i++){
        sum += i;
    }
    cout<<"sum : "<<sum<<endl;
}

int main()
{
    int l = 2, r = 7;
    getSum(l, r);

    getSum(5, 9);
    getSum(19, 25);
    return 0;
}
