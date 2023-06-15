/*
Average of all the elements in the array
Problem Statement: Given an array, we have to find the average of all the elements in the array.

Examples:

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: 3
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+3+4+5)/5 = 3.

Example 2:
Input:  N=6, array[] = {1,2,1,1,5,1}
Output: 1.8
Explanation: Average is the sum of all the elements divided by number of elements.Therefore (1+2+1+1+5+1)/6 = 1.8
*/ 

#include<bits/stdc++.h>
using namespace std;

// TC: O(n)
// SC: O(1)
double getAverage(vector<int>& arr){
    int n = arr.size();
    double avg=0;
    double sum = 0; 
    return accumulate(arr.begin(), arr.end(), sum)/n;
}

int main(){
    int n = 5;
	vector<int> arr= {1,2,1,1,5,1};
    cout<<getAverage(arr)<<endl;
    return 0;
}