/*
Remove brackets from an algebraic expression
In this article, we will solve the most asked interview question: “Remove brackets from an algebraic expression”

Problem Statement: 

Remove brackets from an algebraic expression

Write a program to remove brackets from an algebraic expression

Given an algebraic expression, we need to simplify the expression and remove the brackets.

Examples:

Example 1:
Input: “a+((b-c)+d)”
Output: “a+b-c+d”
Explanation: Removed all the brackets in the algebric expression.

Example 2:
Input: “(((a-b))+c)”
Output: “a-b+c”
Explanation: Removed all the brackets in the algebric expression.
*/ 

#include<bits/stdc++.h>
using namespace std;

void removeBrackets(string s){
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]!='(' && s[i]!=')'){
            cout<<s[i];
        }
    }
}

int main()
{
    string str =  "(((a-b))+c)";
    removeBrackets(str);
    return 0;
}
