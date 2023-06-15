/*
Remove Duplicates From an Unsorted Array
Problem Statement: Given an unsorted array, remove duplicates from the array.

Examples:

Example 1:
Input: arr[]={2,3,1,9,3,1,3,9}
Output:  {2,3,1,9}

Explanation: Removed all the duplicate elements

Example 2:
Input: arr[]={4,3,9,2,4,1,10,89,34}
Output: {3,4,9,2,1,10,34,89}
Explanation: Removed all the duplicate elements
*/ 


#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n)
// SC: O(1)
void removeSuplicates1(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    cout<<arr[0]<<" ";
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i-1] && i!=0){
            cout<<arr[i]<<" ";
        }
    }
}

// Method 2: 
// TC: O(n)
// SC: O(n)
void removeSuplicates2(vector<int>& arr){
    set<int>s(arr.begin(), arr.end());
    for(auto x: s) cout<<x<<" ";
}

// Method 3: 
// TC: O(n)
// SC: O(n)
void removeSuplicates3(vector<int>& arr){
    int n = arr.size();
    map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto x: mp) cout<<x.first<<" ";
}


int main()
{
    vector<int>arr{2,3,1,9,3,1,3,9};
    removeSuplicates1(arr);
    cout<<endl;
    removeSuplicates2(arr);
    cout<<endl;
    removeSuplicates3(arr);
    return 0;
}
