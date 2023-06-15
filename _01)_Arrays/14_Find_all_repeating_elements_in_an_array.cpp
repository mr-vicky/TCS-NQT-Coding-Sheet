/*
Find all repeating elements in an array
Problem Statement: Find all the repeating elements present in an array.

Examples:

Example 1:
Input: 
Arr[] = [1,1,2,3,4,4,5,2]
Output:
 1,2,4
Explanation:
 1,2 and 4 are the elements which are occurring more than once.

Example 2:
Input:
 Arr[] = [1,1,0]
Output:
 1
Explanation:
 Only 1 is occurring more than once in the given array.
*/ 

#include<bits/stdc++.h>
using namespace std;

// Method 1;
// TC: O(n*log(n))
// SC: O(1)
void findRepeatingElements1(int arr[], int n){
    sort(arr, arr+n);

    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1])
            cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// Method 2: 
// TC: O(n)
// SC: O(n)
void findRepeatingElements2(int arr[], int n){
    map<int, int>mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x: mp){
        if(x.second>1)
            cout<<x.first<<" ";
    }
}

int main()
{
    int arr[] = {1,1,2,3,4,4,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    findRepeatingElements1(arr,8);

    findRepeatingElements2(arr,8);

    return 0;
}

