/*
Remove all vowels from the String
Problem Statement: Given a String, write a program to remove vowels from a given String.

Examples:

Example 1:
Input: Str = “take u forward”
Output: tk  frwrd
Explanation: All vowels are removed from the given String.

Example 2:
Input: Str = “I am very happy today”
Output:  m vry happy tdy
Explanation: All vowels are removed from the given String.
*/ 

#include<bits/stdc++.h>
using namespace std;

void RemoveVowels(string s){
    string res="";
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || 
           s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                continue;
           }
           else{
            res+=s[i];
           }
    }

    for(int i=0; i<res.length(); i++){
        cout<<res[i];
    }
}

int main()
{
  string str = "I am very happy today";
  RemoveVowels(str);
  return 0;
}
