/*
Sum of first N Natural Numbers
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

Examples:

Example 1:
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Example 2:
Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/ 

#include<bits/stdc++.h>
using namespace std;

// TC: O(1)
// SC: O(1)
void getSum(int n){
    int sum = n*(n+1)/2;
    cout<<"The sum of first "<<n<<" natural numbers is : "<<sum<<endl;
}

 int main() {
    getSum(5);
    getSum(19);
    getSum(25);
    return 0;
  }