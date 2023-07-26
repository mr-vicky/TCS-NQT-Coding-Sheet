/*
Given an array arr[] of size N, the task is to find the largest element in the given array. 

Examples: 

Input: arr[] = {10, 20, 4}
Output: 20
Explanation: Among 10, 20 and 4, 20 is the largest. 

Input : arr[] = {20, 10, 20, 4, 100}
Output : 100

*/ 

#include<iostream>
#include<limits.h>
using namespace std;

int getLargest(int arr[], int n){
    int lar=INT_MIN;
    for(int i=0; i<n; i++){
        lar=max(lar, arr[i]);
    }
    return lar;
}

int main()
{
    int arr[] = {10, 20, 4};
    cout<<getLargest(arr, 3)<<endl;

    int arr2[] = {20, 10, 20, 4, 100};
    cout<<getLargest(arr2, 5)<<endl;
    return 0;
}
