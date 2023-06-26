/*
Remove Characters from first String present in the Second String
Problem Statement: Given two strings, write a program to remove characters from the first string which are present in the second string.

Examples:

Example 1:
Input: String str1 = “abcdef”
       String str2 = “cefz”
Output: abd
Explanation: The common characters in both strings are c, e, f.
So after removing these characters from string 1 we get string resulting string as abd.


Example 2:
Input: String str1 = “xyzpw”
       String str2 = “lmno”
Output: xyzpw
Explanation: As there is no common character in both the strings, string 1 remains unchanged.
*/ 

#include<bits/stdc++.h>
using namespace std;

// TC: O(n*n)
// SC: O(1)
void getCharacters(string s1, string s2){
    for(int i=0; i<s1.length(); i++){
        bool flag = false;
        for(int j=0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                flag = true;
            }
        }
        if(flag==false){
            cout<<s1[i];
        }

    }
}

int main()
{
    string s1 = "abcdef";
    string s2 = "cefz";

    getCharacters(s1, s2);
    return 0;
}
