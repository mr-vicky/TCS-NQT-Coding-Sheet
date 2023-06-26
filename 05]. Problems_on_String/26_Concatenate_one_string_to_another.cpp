/*
Concatenate one string to another
Problem Statement: Concatenate one string to another. Write a program to concatenate one string’s contents to another. Concatenation means to join two (or more) strings and form a combined string having the characters of both ( or all) strings in the same order as they were before in separate strings.

Examples:
INPUT: s1 = "Hello" s2="World" 
OUTPUT: "HelloWorld"
*/ 

#include<bits/stdc++.h>
using namespace std;

string concatinate(string s1, string s2){
    return s1+s2;
}

int main()
{
    string s1="Hello";
    string s2="World";
    cout<<concatinate(s1, s2);
    return 0;
}
