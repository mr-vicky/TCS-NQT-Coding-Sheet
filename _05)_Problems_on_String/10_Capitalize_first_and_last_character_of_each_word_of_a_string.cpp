/*
Capitalize first and last character of each word of a string
Problem Statement: Given a string, write a program to Capitalize the first and last character of each word of that string.

Examples:

Example 1:
Input: String str = "take u forward is awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: We get the result after capitalizing the first and last character of each word of a string

Example 2:
Input: String str = "Take u Forward is Awesome"
Output: “TakE U ForwarD IS AwesomE”
Explanation: Characters T, F, A are initially in uppercase , so they remain as they are in the result.
*/ 
#include<bits/stdc++.h>
using namespace std;

void capitalize(string s){
    int n = s.length();
    if(s[0] >= 'a' && s[0] <= 'z')
         s[0]-=32;

    if(s[n-1] >= 'a' && s[n-1] <= 'z')
        s[n-1]-=32;
    
    for(int i=1; i<n-1; i++){

        if((s[i-1]==' ' || s[i+1]==' ' ) && (s[i] >= 'a' && s[i] <= 'z')){
            s[i]-=32;
        }
    }

    for(int i=0; i<n; i++){
        cout<<s[i];
    }
}

int main()
{
    string s = "I am Iron Man";
    capitalize(s);
    return 0;
}
