/*
Insertion Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52


Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1,2,3,4,5
*/ 
#include<bits/stdc++.h>
using namespace std;

// Worst case TC: O(n*n)
// Best case TC: O(n)
// Insertion sort is Adaptive in nature
// Insertion sort is stable
void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int x = arr[i];
        while(j>=0 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x; 
    }
}

int main()
{
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting: "<<endl;
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    InsertionSort(arr, n);

    cout<<"After Sorting: "<<endl;
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}

