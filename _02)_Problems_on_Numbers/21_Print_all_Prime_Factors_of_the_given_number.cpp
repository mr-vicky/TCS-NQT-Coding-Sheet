/*
Print all Prime Factors of the given number
Problem Statement: Given a number n. Print all Prime Factors of the given number n.

Examples:

Example 1:
Input: N = 12
Output: 2,2,3
Explanation: These are the prime factors of 12.

Example 2:
Input: N = 36
Output: 2,2,3,3
Explanation: These are the prime factors of 36.
*/ 

#include<bits/stdc++.h>
using namespace std;

void getPrimeFactors(int n){
    vector<int>arr;
    for(int i=1; i<n; i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }

    for(int i=0; i<arr.size(); i++){
        int flag = true;
        for(int j=2; j<arr[i]; j++){
            if(arr[i]%j==0){
                flag = false;
            }
        }
        if(arr[i]!=1 && flag==true){
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int n = 12;
    getPrimeFactors(n);
    return 0;
}
