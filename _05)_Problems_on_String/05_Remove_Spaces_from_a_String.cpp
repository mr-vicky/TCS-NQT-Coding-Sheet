/*
Remove Spaces from a String
Problem Statement: Given a string, write a program to remove all the whitespaces from the string.

Examples:

Example 1:
Input: str = “Take you forward” 
Output: Takeyouforward
Explanation: After removing all the whitespaces Takeyouforward is the result

Example 2:
Input: str = “How are you doing”
Output: Howareyoudoing
Explanation: After removing all the whitespaces Howareyoudoing is the result

*/ 

#include<iostream>
using namespace std;

void removeSpaces(string s){
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]!=' '){
            cout<<s[i];
        }
    }
}

int main()
{
    string str = "How are you doing";

    removeSpaces(str);
    return 0;
}
