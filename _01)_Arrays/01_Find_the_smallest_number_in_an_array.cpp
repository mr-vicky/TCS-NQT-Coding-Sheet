/*
Problem Statement: Given an array, we have to find the smallest element in the array.

Examples:

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 0
Explanation: 0 is the smallest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 5
Explanation: 5 is the smallest element in the array.

*/ 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// TC: O(n*log(n))
// SC: O(n)
int getSmallest(vector<int> arr){
    sort(arr.begin(), arr.end());
    return arr[0];
}

int main(){
    vector<int>arr1 = {23, 24, 53, 53, 14, 456, 755};
    vector<int>arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout<<getSmallest(arr1)<<endl;
    cout<<getSmallest(arr2)<<endl;
}