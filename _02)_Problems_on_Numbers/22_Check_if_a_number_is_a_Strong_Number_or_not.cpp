/*
Check if a number is a Strong Number or not
Problem Statement: Given an integer Print “YES” if it is a strong number else print “NO”.

Note : 

When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
Strong number is also known as Krishnamurthi number/Peterson Number.
Examples:

Examples 1:
Input: N = 145
Output: Yes
Explanation: 1! + 4! + 5! = 145. Hence 145 is a strong number. 

Example 2:
Input:  26
Output: No
Explanation: 2! + 6! = 722. Hence 26 is not a strong number.
*/ 

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

void isStrong(int n){
    int res = 0;
    vector<int>arr;
    int temp = n;
    while(temp>0){
        arr.push_back(temp%10);
        temp/=10;
    }

    for(int i=0; i<arr.size(); i++){
        res += factorial(arr[i]);
    }

    if(res == n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main()
{
    int n= 145;
    
    isStrong(n);
    isStrong(26);
    isStrong(1925);
    return 0;
}
