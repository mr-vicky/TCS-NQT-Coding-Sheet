/*
Remove characters from a string except alphabets
Problem Statement: Write a program to remove all characters from a string except alphabets in a given string.

Examples:

Example 1:
Input: string str = "take12% *&u ^$#forward"
Output: takeuforward
Explanation:
Characters 1,2,%,*,&,^,$,# along with whitespaces are 
removed but the order of remaining alphabets is preserved.

Example 2:
Input: String str = "1.Python & 2.Java"
Output: PythonJava
Explanation: 
Characters 1.&2. along with whitespaces are removed 
but the order of remaining alphabets is preserved.
*/ 

#include<bits/stdc++.h>
using namespace std;

void removeCharacters(string s){
    for(int i=0; i<s.length(); i++){
        if((s[i] >= 'A' && s[i]<='Z') || (s[i] >= 'a' && s[i] <= 'z') ){
            cout<<s[i];
        }
    }
}

int main()
{
    string s = "Mr12% *& ^$#Vicky" ;
    removeCharacters(s);
    return 0;
}
