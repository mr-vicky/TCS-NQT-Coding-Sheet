/*
Replace elements by its rank in the array
Replace elements by its rank in the array

Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.

Examples:

Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…

Example 2:
Input: 1 5 8 15 8 25 9
Output: 1 2 3 5 3 6 4
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so…
*/ 

#include<bits/stdc++.h>
using namespace std;

void ReplaceElement(int arr[], int n){
    vector<int>v(arr, arr+n);
    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==v[j]){
                arr[i]=j+1;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
	int n = 6;
	int arr[n] = {20, 15, 26, 2, 98, 6};
	ReplaceElement(arr, n);
    return 0;
}