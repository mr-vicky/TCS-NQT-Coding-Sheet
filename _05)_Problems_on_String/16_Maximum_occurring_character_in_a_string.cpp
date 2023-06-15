/*
Maximum occurring character in a string
Maximum occurring character in a string

Problem Statement: Given a string, return the character that occurs the maximum number of times in the string. If the maximum occurrence of two or more characters is the same, return any one of them. 

Examples:

Example 1:
Input: str = “takeuforward”
Output: a
Explanation: The character 'a' and 'r’ have the same  maximum occurrence i.e 2. Hence we can print any one of them

Example 2:
Input: str = “apple”
Output: p
Explanation: The character 'p' have the maximum occurrence i.e 2.
*/ 

#include<bits/stdc++.h>
using namespace std;

void getMaximumOccuring(string s){
    map<char, int>mp;
    int n = s.length();
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    int max_occuring = 0;
    for(auto x: mp){
        max_occuring = max(max_occuring, x.second);
    }

    for(auto x: mp){
        if(x.second==max_occuring){
            cout<<x.first<<endl;
            break;
        }
    }
}

int main()
{
    string str = "takeuforward";
    getMaximumOccuring(str);
    getMaximumOccuring("apple");
    return 0;
}
