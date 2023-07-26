/*
Given an array of integers, our task is to write a program that efficiently finds the second-largest element present in the array. 

Example:

Input: arr[] = {12, 35, 1, 10, 34, 1}
Output: The second largest element is 34.
Explanation: The largest element of the 
array is 35 and the second 
largest element is 34

Input: arr[] = {10, 5, 10}
Output: The second largest element is 5.
Explanation: The largest element of 
the array is 10 and the second 
largest element is 5

Input: arr[] = {10, 10, 10}
Output: The second largest does not exist.
Explanation: Largest element of the array 
is 10 there is no second largest element
 */ 

#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(int arr[], int n){
    set<int>s(arr, arr+n);
    if(s.size()==1){
        return -1;
    }
    vector<int>v(s.begin(), s.end());
    return v[s.size()-2];
}

int main()
{
    int arr[]{12, 35, 1, 10, 34, 1};
    cout<<getSecondLargest(arr, 6)<<endl;

    int arr1[]{10, 5, 10};
    cout<<getSecondLargest(arr1, 3)<<endl;

    int arr2[]{10, 10, 10};
    cout<<getSecondLargest(arr2, 3)<<endl;

    return 0;
}
