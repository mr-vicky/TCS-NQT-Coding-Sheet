/*
Change case of each character in a string
Problem Statement: Write a  program to change the case (lower to upper and upper to lower cases) of each character of a given string.

Examples:

Example 1:
Input: String str = “javA”
Output: JAVa
Explanation:
 Changed the lower case characters to uppercase and vice versa.

Example 2:
Input: String str = “take u forward IS Awesome”
Output: TAKE U FORWARD is aWESOME
Explanation: Changed the lower case characters to uppercase and vice versa.
*/ 

#include<bits/stdc++.h>
using namespace std;

void changeTheCase(string s){
    for(int i=0; i<s.length(); i++){
        if(s[i] > 'A' && s[i] < 'Z'){
            s[i]+=32;
        }
        else if(s[i] > 'a' && s[i] < 'z'){
            s[i]-=32;
        }
    }

    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
}

int main()
{
    string str = "Iron Man";
    changeTheCase(str);
    return 0;
}
