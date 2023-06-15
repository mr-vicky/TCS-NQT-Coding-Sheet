/*
Factorial of a Number : Iterative and Recursive
Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number. 

Examples:

Example 1:
Input: X = 5
Output: 120
Explanation: 5! = 5*4*3*2*1

Example 2:
Input: X = 3
Output: 6
Explanation: 3!=3*2*1
*/ 

#include<bits/stdc++.h>
using namespace std;

void getFactorial(int n){
    int res=1;
    for(int i=1; i<=n; i++){
        res*=i;
    }
    cout<<"Factoral of "<<n<<" is "<<res<<endl;
}


int main()
{
    int n = 5;
    getFactorial(n);
    getFactorial(3);
    return 0;
}
