/*
Write a program to sort characters in a string
Problem Statement:  Write a program to sort characters (numbers and punctuation symbols are not included) in a given string.

Examples:

Example 1:
Input: String str = “zxcbg”
Output: bcgxz
Explanation: After sorting we get string as bcgxz

Example 2:
Input: String str = “edcba”
Output: abcde
Explanation: After sorting we get string as abcde
*/ 
#include<bits/stdc++.h>
using namespace std;

// Method 1:
void getSorted1(string s){
    sort(s.begin(), s.end());
    for(auto x: s)
        cout<<x;
    cout<<endl;
}

// Method 2:
void getSorted2(string s){
    set<char>st(s.begin(), s.end());
    for(auto x: st){
        cout<<x;
    }
    cout<<endl;
}

int main()
{
    string s = "zxcbg";
    getSorted1(s);
    getSorted2(s);
    getSorted2("edcba");
    return 0;
}
