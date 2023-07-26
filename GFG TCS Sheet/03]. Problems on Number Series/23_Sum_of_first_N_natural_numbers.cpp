/*
Given a number n, find the sum of the first natural numbers.

Examples : 

Input: n = 3
Output: 6
Explanation:
Note that 1 + 2 + 3 = 6

Input  : 5
Output : 15 
Explanation :
Note that 1 + 2 + 3 + 4 + 5 = 15
*/ 
#include<iostream>
using namespace std;

int getSum(int n){
    return n*(n+1)/2;
}

int main(){
    int n=4;
    cout<<getSum(n);
    return 0;
}