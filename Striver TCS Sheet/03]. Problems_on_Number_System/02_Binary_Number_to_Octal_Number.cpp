/*
Convert Binary to Octal
Problem Statement: Convert a binary number to an octal number

Examples:

Example 1:.
Input: N = 1100110
Output: 146
Explanation: 1100110 when converted to octal number is “146”.

Example 2:
Input: 11111
Output: 37
Explanation: 11111 when converted to octal number is “37”.
*/ 

#include<iostream>
#include<string>
using namespace std;

void convert_binary_to_octal(string s){
    int n = s.length();
    if( n%3 == 1){
        s = "00" + s;
    }
    else if( n%3 == 2){
        s = "0" + s;
    }
    n = s.length();
    string res = "";
    for(int i = 0; i < n; i += 3){
        // converting to int by substracting '0' before multiplying
        int temp = (s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0')*1; 
        // converting to string again by adding '0' and adding it to the res
        res += temp + '0'; 
    }
    cout<<res;
}

int main(){
    string s = "1100110";
    convert_binary_to_octal(s); 
} 