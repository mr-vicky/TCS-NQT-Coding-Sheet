/*
Change every letter with next lexicographic alphabet
Problem Statement: Given a string, write a program to change every letter in the given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a)

Examples:

Example 1:
Input: string str = “abcdxyz”
Output: bcdeyza
Explanation:

Example 2:
Input: string str = “Java”
Output: Kbwb
Explanation:

*/ 

#include<bits/stdc++.h>
using namespace std;

void changeLetter(string s){
    int n = s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='z'){
            s[i]='a';
        }
        else 
            s[i]+=1;
    }

    for(int i=0; i<n; i++)
        cout<<s[i];
    cout<<endl;
}

int main()
{
    string s = "abcdxyz";
    changeLetter(s);
    changeLetter("java");
    return 0;
}
