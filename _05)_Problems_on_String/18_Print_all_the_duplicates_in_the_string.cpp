/*
Print all the duplicates in the string
Print all the duplicates in the string

Problem Statement: Given a string of characters from a to z. Print the duplicate characters(which are occurring more than once) in the given string with their occurrences count.

Examples:

Example 1:
Input:
 str= "sinstriiintng"
Output:
i - 4
n - 3
s - 2
t - 2
Explanation:
In the above example, 's' occurs twice, 'i' occurs four times, 't' occurs twice and 'n' occurs thrice. 'r' and 'g' occur only one time and hence are not considered.

Example 2:
Input:
 str= "abcdefg"
Output:
< -- No Output -- >
Explanation:

In the above example, every character occurs only once(no duplicates), therefore nothing to print.

*/ 

#include<bits/stdc++.h>
using namespace std;

// TC: O(n)
// SC: O(n)
void getDuplicates(string s){
    int n = s.length();
    map<char, int>mp;

    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    for(auto x: mp){
        if(x.second>1){
            cout<<x.first<<" - "<<x.second<<endl;
        }
    }
}

int main()
{
    string str = "sinstriiintng";
    getDuplicates(str);

    return 0;
}
