/*
Find Median of the given Array
Problem Statement: Given an unsorted array, find the median of the given array.

Examples:

Example 1:
Input: [2,4,1,3,5] 5 
Output: 3

Example 2:
Input: [2,5,1,7]
Output: 3.5
*/ 

#include<bits/stdc++.h>
using namespace std;

void getMedian(int arr[], int n){
    double median=0;
    sort(arr, arr+n);

    if(n%2==0){
        cout<<(double)(arr[(n/2)]+arr[(n/2)-1])/2;
    }
    else{
        cout<<arr[(n/2)+1];
    }
}

int main(){
    int arr[] = {2,5,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The median of the array is: ";
    getMedian(arr,n);
    return 0;
}