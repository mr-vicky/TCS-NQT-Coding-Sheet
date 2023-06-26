/*
Quick Sort Algorithm
Problem Statement:  Given an array of n integers, sort the array using the Quicksort method.

Examples:

Example 1:
Input:  N = 5  , Arr[] = {4,1,7,9,3}
Output: 1 3 4 7 9 

Explanation: After sorting the array becomes 1, 3, 4, 7, 9

Example 2:
Input: N = 8 , Arr[] = {4,6,2,5,7,9,1,3}
Output: 1 2 3 4 5 6 7 9
Explanation: After sorting the array becomes 1, 3, 4, 7, 9
*/ 
#include<bits/stdc++.h>
using namespace std;

int swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int l, int r){
    int pivot=arr[r];
    int i=l-1;

    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);

    }
}

int main()
{
    int arr[5]={5,4,3,2,1};
    quickSort(arr, 0, 4);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
