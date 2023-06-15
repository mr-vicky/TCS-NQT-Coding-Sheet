/*
Reverse a String
Problem Statement: Reverse a String. Write a program that reverses a given string (in-place).

Examples:
INPUT: HELLO
OUTPUT: OLLEH

INPUT: I AM IRON MAN
OUTPUT: NAM NORI MA I
*/ 
#include<bits/stdc++.h>
using namespace std;

// Method 1: 
// TC: O(n)
// SC: O(1)
void getReverse1(string s){
    for(int i=s.length(); i>=0; i--){
        cout<<s[i];
    }
    cout<<endl;
}

// Method 2: 
// TC: O(n)
// SC: O(1)
void getReverse2(string s){
    reverse(s.begin(), s.end());
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    cout<<endl;
}

int main()
{
    string s = "I AM IRON MAN";
    getReverse1(s);
    getReverse2(s);

    return 0;
}
