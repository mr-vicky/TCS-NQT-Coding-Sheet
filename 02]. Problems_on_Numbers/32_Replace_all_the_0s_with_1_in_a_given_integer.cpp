/*
Replace all the 0’s with 1 in a given integer
Problem Statement: You are given an integer. Your task is to replace all the zeros in the integer with ones.

Examples:

Example 1:
Input: N = 102003
Output: 112113
Explanation: The 2nd,4th and 5th position from left contain 0.The resultant integer has replaced the 0’s in those  positions with 1.

Example 2:
Input:  204
Output: 214
Explanation: The 2nd position from left contain 0. The resultant integer has replaced the 0 in that position with 1.
*/ 

#include<bits/stdc++.h>
using namespace std;

void replaceZerosWithOne(int n){
    vector<int>arr;
    int res = 0;
    while(n>0){
        arr.push_back(n%10);
        n/=10;
    }

    reverse(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0){
            arr[i]=1;
        }
    }

    for(int i=0; i<arr.size(); i++){
        res = res*10 + arr[i];
    }
    cout<<res<<endl;
}

int main()
{
    int n = 204;
    replaceZerosWithOne(n);
    replaceZerosWithOne(102003);
    return 0;
}
