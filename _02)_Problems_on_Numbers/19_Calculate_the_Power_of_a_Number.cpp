/*
Calculate the Power of a Number : Binary Exponentiation
Problem Statement: Find the Power of a number.

Examples:

Example 1:
Input: N = 5, k=3
Output: 125
Explanation: Since 5*5*5 is 125.

Example 2:
Input: n=2 k=4
Output: 16
Explanation: Since 2*2*2*2 is 16
*/ 

#include<bits/stdc++.h>
using namespace std;

void powerOf(int n, int k){
    int res=1;
    for(int i=0; i<k; i++){
        res*=n;
    }
    cout<<"Power of "<<n<<" to "<<k<<" is "<<res<<endl;
}

int main()
{
    int n = 5, k = 3;
    powerOf(n, k);
    powerOf(2, 4);
    return 0;
}
