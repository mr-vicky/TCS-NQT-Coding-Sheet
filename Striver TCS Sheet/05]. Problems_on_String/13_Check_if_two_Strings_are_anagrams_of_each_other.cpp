/*
Check if two Strings are anagrams of each other
Problem Statement: Given two strings, check if two strings are anagrams of each other or not.

Examples:

Example 1:
Input: CAT, ACT
Output: true
Explanation: Since the count of every letter of both strings are equal.

Example 2:
Input: RULES, LESRT 
Output: false
Explanation: Since the count of U and T  is not equal in both strings.
*/ 

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1.length()!=s2.length()){
        return false;
    }
    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "ACT";
    string str2 = "CAT";
    cout<<boolalpha<<isAnagram(str1, str2);
    return 0;
}
