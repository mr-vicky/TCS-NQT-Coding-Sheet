/*
Given a range L and R, the task is to find the sum of all natural numbers in range L to R. 
Examples: 
 

Input: L = 2, R = 5
Output: 14
2 + 3 + 4 + 5 = 14

Input: L = 10, R = 20
Output: 165
*/ 

#include<iostream>
using namespace std;

int getSum(int l, int r){
    int sum=0;
    for(int i=l; i<=r; i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int L=2; 
    int R=5;
    cout<<getSum(L, R);
    return 0;
}
