/*
Selection Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5
*/ 

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int i,j,k;
    for(i=0; i<n-1; i++){
        for(j=k=i; j<n; j++ ){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        swap(arr[i], arr[k]);
    }
}

int main()
{
    int arr[] = {8,6,3,10,9,8,12,5,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Sorting: "<<endl;
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    selectionSort(arr, n);

    cout<<"After Sorting: "<<endl;
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}