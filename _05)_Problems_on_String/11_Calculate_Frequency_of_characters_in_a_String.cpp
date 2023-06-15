/*
Calculate Frequency of characters in a String
Problem Statement: Given a string, calculate the frequency of characters in a string.

Examples:

Example 1:
Input: takeuforward
Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1 
Explanation: Count of every character of string is printed.

Example 2:
Input: articles
Output: a1 c1 e1 i1 l1 r1 s1 t1 
Explanation: Count of every character of string is printed.
*/ 
#include<bits/stdc++.h>
using namespace std;

void Printfrequency(string s){
    map<char, int>mp;

    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    
    for(auto x: mp){
        cout<<x.first<<x.second<<" ";
    }
}

int main()
{
    string str = "Extraordinary";
    Printfrequency(str);
    return 0;
}
