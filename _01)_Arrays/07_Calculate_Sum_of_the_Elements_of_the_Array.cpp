/*
Calculate Sum of the Elements of the Array
Problem Statement: Given an array, we have to find the sum of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 11
Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11
*/ 

#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n)
// SC: O(1)
int getSum1(vector<int>& arr){
    int n = arr.size();
    int sum = 0;

    for(auto x: arr){
        sum+=x;
    }
    return sum;
}

// Method 2: 
// TC: O(n)
// SC: O(1)
int getSum2(vector<int>& arr){
    int sum = 0;
    return accumulate(arr.begin(), arr.end(), sum);
}

int main() {
	int n = 5;
	vector<int>arr = {1, 2, 3, 4, 5};
	int sum = 0;
	cout<<getSum1(arr)<<endl;

    cout<<getSum2(arr)<<endl;
}