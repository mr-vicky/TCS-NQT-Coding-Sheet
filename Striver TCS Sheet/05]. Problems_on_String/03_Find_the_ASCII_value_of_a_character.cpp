/*
Find the ASCII value of a character
Problem Statement: Given a character, Find the ASCII value of the character.

Examples:

Example 1:
Input: c = ‘A’
Output: 65
Explanation: ASCII value of A is 65

Example 2:
Input: c = ‘e’
Output: 101
Explanation: ASCII value of e is 101
*/ 

#include<bits/stdc++.h>
using namespace std;

void get_ASCII_value(char c){
    cout<<(int)c<<endl;
}

int main()
{
    char c = 'A';
    get_ASCII_value(c);
    c = 'e';
    get_ASCII_value(c);

    return 0;
}
