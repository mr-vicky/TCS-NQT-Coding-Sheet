/*
Check if a number is Palindrome or Not
Problem Statement:  Given a number check if it is a palindrome.

An integer is considered a palindrome when it reads the same backward as forward.

Examples:

Example 1:
Input: N = 123
Output: Not Palindrome Number
Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.

Example 2:
Input: N =  121 
Output: Palindrome Number
Explanation: 121 read backwards as 121.Since these are two same numbers 121 is a palindrome.
*/ 

#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n)
// SC: O(n)
bool isPalindrome(int x){
    vector<int>arr;
    while(x>0){
        arr.push_back(x%10);
        x/=10;
    }

    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int x = 1925;
    cout<<boolalpha<<isPalindrome(x);
    cout<<endl;
    cout<<boolalpha<<isPalindrome(121);

    return 0;
}
