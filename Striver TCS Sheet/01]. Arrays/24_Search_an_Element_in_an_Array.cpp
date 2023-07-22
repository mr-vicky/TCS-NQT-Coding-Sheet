/*
Search an Element in an Array : Program CPP Java
Problem Statement: Search an element in an array and return its position

Examples:

Example 1:
Input: array[] = {1,2,3,4,5} k=3                                                                              Output: 2                                                                                                              Explanation: The answer is 2 because 3 is present at 2nd index.

Example 2:
Input: array[]={6,7,9,5,3,10} k=10
Output: 5
Explanation: The answer is 5 because 10 is present at 5th index.
*/ 

#include<bits/stdc++.h>
using namespace std;

// Method 1: Linear Search
// TC: O(n)
// SC: O(1)
int linearSearch(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}

// Method 2: Binary Search: works only, if array is sorted -> 
// TC: O(log(n))
// SC: O(1)
int binarySearch(int arr[], int n, int k){
    int left = 0;
    int right = n-1;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            left=mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main()
{
    int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
    cout<<linearSearch(arr, n, k);
    cout<<endl;
    cout<<binarySearch(arr, n, k);

    return 0;
}
