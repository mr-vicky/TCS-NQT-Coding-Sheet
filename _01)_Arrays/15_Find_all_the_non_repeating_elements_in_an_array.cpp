/*
Find all the non-repeating elements in an array
Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.

Examples:

Example 1:
Input:
 Nums = [1,2,-1,1,3,1]
Output:
 2,-1,3
Explanation:
 1 is the only element in the given array which occurs thrice in the array. -1,2,3 occurs only once and hence, these are non-repeating elements of the given array.

Example 2:
Input:
 Nums = [1,2,3]
Output:
 1,2,3
Explanation:
 All elements present in the array occur once. Hence, every element is non-repeating.
*/ 

#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n)
// SC: O(n)
void findNonRepeatingElement(vector<int>& nums){
    int n = nums.size();
    map<int, int>mp;

    for(int i=0; i<n; i++){
        mp[nums[i]]++;
    }

    for(auto x: mp){
        if(x.second==1){
            cout<<x.first<<" ";
        }
    }
    cout<<endl;
}


int main() {
    vector<int> nums = {1,2,-1,1,3,1};
    cout<<"Non-repeating numbers are: "<<endl;
    findNonRepeatingElement(nums);
    
    return 0;
}