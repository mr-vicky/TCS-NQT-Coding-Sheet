/*
Remove All Duplicates from a String
Problem Statement: Given a String remove all the duplicate characters from the given String.

Examples:

Example 1:
Input: s = "bcabc"
Output: “bca"

Explanation: Duplicate Characters are removed
Example 2:
Input: s = "cbacdcbc"
Output: "cbad" 
Explanation: Duplicate Characters are removed
*/ 

#include<bits/stdc++.h>
using namespace std;

void removeDupicates(string s){
    unordered_map<char, int>ump;
    for(int i=0; i<s.length(); i++){
        ump[s[i]]++;
    }

    for(auto x: ump){
        cout<<x.first;
    }
}

int main()
{
    string s = "cbacdcbc";
    removeDupicates(s);
    return 0;
}