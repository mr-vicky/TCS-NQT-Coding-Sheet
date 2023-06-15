/*
Factors of a Given Number
Problem Statement: Find all factors of a number or find all distinct divisors of a natural number.

Examples:

Example 1:
Input: n = 6
Output: 1,2,3,6
Explanation: 6 is divisible by 1,2,3,6

Example 2:
Input: n = 9
Output: 1,3,9
Explanation: 9 is divisible by 1,3,9
*/ 

#include<iostream>
using namespace std;

void getFactors(int n){
    cout<<"Factors of "<<n<<" are ";
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n = 9;
    getFactors(n);
    getFactors(6);

    return 0;
}
