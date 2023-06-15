/*
Find Non-repeating characters of a String
Problem:  Given a string, print non-repeating characters of the string.

Examples:

Example 1:
Input: string = “google”
Output: l,e

Explanation: Non repeating characters are l,e.

Example 2:
Input: string = “yahoo”
Output: y,a,h
Explanation: Non repeating characters are y,a,h
*/ 

#include<bits/stdc++.h>
using namespace std;

void getNonRepeating(string s){
    map<char, int>mp;

    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    
    for(auto x: mp){
        if(x.second==1){
            cout<<x.first<<" ";
        }
    }
}

int main()
{
 
    string str = "google";
    getNonRepeating(str);

    return 0;
}
