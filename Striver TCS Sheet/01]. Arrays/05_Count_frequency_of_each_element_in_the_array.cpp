/*
Count frequency of each element in the array
Problem statement: Given an array, we have found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	 5  2
        15  1
Explanation: 10 occurs 3 times in the array
	      5 occurs 2 times in the array
              15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	3  1
        4  2
Explanation: 2 occurs 3 times in the array
	     3 occurs 1 time in the array
             4 occurs 2 time in the array
*/ 

#include <bits/stdc++.h>
using namespace std;

 
// Method 1: 
// TC: O(n)
// SC: O(n)
void countFreq1(int arr[], int n){
    map<int, int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq1(arr, n);
    return 0;
}