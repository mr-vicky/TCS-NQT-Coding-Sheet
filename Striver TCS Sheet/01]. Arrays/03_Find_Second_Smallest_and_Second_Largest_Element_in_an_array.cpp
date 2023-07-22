/*
Find Second Smallest and Second Largest Element in an array
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Examples:

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2

Example 2:
Input: [1]
Output: Second Smallest : -1
	Second Largest : -1
Explanation: Since there is only one element in the array, it is the largest and smallest element present in the array. There is no second largest or second smallest element present.
*/ 


#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n*log(n))
// SC: O(1)
void getElements1(int arr[], int n){
    if(n<=1){
        cout<<" 2nd Smallest: -1"<<endl;
        cout<<"2nd Largest: -1"<<endl;
    }

    sort(arr, arr+n);
    cout<<"2nd Smallest: "<<arr[1]<<endl;
    cout<<"2nd Largest: "<<arr[n-2]<<endl;
}

// Method 2: 
// TC: O(n)
// SC: O(1)
void getElements2(int arr[], int n){
    int smallest = INT_MAX; 
    int largest = INT_MIN;
    int sec_smallest = INT_MAX;
    int sec_largest = INT_MIN;

    for(int i=0; i<n; i++){
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    for(int i=0; i<n; i++){
        if(arr[i] < sec_smallest && arr[i]!=smallest){
            sec_smallest=arr[i];
        }

        if(arr[i] > sec_largest && arr[i]!=largest){
            sec_largest=arr[i];
        }

    }

    cout<<"2nd Smallest: "<<sec_smallest<<endl;
    cout<<"2nd Largest: "<<sec_largest<<endl;
}

int main(){
    int arr[]={1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getElements1(arr,n);
    cout<<endl<<endl;

    getElements2(arr,n);
    return 0;
}