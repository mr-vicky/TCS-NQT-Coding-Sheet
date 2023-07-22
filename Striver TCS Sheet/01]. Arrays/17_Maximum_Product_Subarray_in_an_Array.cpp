/*
Maximum Product Subarray in an Array
Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

Examples:

Example 1:
Input:
 Nums = [1,2,3,4,5,0]
Output:
 120
Explanation:
 In the given array, we can see 1×2×3×4×5 gives maximum product value.


Example 2:
Input:
 Nums = [1,2,-3,0,-4,-5]
Output:
 20
Explanation:
 In the given array, we can see (-4)×(-5) gives maximum product value.
*/ 


#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n*n)
// SC: O(1)
int maxProductSubArray(vector<int>& nums){
    int n = nums.size();
    int max_product = 1;

    for(int i=0; i<n; i++){
        int curr_product = 1;
        for(int j=0; j<n; j++){
            curr_product = curr_product * nums[j];
            max_product = max(curr_product, max_product);
        }
    }
    return max_product;
}

int main() {
    vector<int> nums = {1,2,3,4,5,0};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}