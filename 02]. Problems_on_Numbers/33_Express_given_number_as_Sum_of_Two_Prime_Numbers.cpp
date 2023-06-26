/*
Express given number as Sum of Two Prime Numbers
Problem: Given a number n, express the number as a sum of 2 prime numbers.

Examples:

Example 1:
Input : N = 74
Output : True . 
Explanation: 74 can be expressed as 71 + 3 and both are prime numbers. 

Example 2:
Input : N = 11
Output : False. 
Explanation: 11 cannot be expressed as sum of two prime numbers.
*/ 
#include<bits/stdc++.h>
using namespace std;

bool isSumOfTwoPrime(int n){
    vector<int>arr;
    for(int num=1; num<n; num++){
        int flag = true;
        for(int j=2; j<num; j++){
            if(num%j==0){
                flag = false;
            }
        }
        if(num!=1 && flag==true){
            arr.push_back(num);
        }
    }

    for(auto x: arr) cout<<x<<" ";

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==n){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n = 11;
    cout<<boolalpha<<isSumOfTwoPrime(n)<<endl;
    cout<<boolalpha<<isSumOfTwoPrime(74)<<endl;
    return 0;
}
