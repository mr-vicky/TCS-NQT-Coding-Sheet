/*
Bubble Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52


Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
*/ 

#include<bits/stdc++.h>
using namespace std;

// Worst Case TC: O(n*n)
// Best case TC: O(n) : if array is already sorted
// Bubble Sort is Adaptive, we can make it adaptive - By nature Bubble sort is not adaptive
// Bubble Sort is Stable
void BubbleSort(int A[], int n){
    for(int i=0; i<n-1; i++){
        bool flag = 0;
        for(int j=0; j<n-1-i; j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main()
{
    int A[]={13,46,24,52,20,9};

    cout<<"Before Sorting: "<<endl;
    for(auto x: A){
        cout<<x<<" ";
    }
    cout<<endl;
    int n = sizeof(A)/sizeof(A[0]);
    BubbleSort(A, n);

    cout<<"After Sorting: "<<endl;
    for(auto x: A){
        cout<<x<<" ";
    }
    return 0;
}