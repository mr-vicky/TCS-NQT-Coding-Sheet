/*
Check if a number is Armstrong Number or not
Problem Statement: Given a number, check if it is Armstrong Number or Not.

Examples:

Example 1:
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153

Input:170 
Output: No, it is not an Armstrong Number
Explanation: 1^3 + 7^3 + 0^3 != 170
*/ 

#include<bits/stdc++.h>
using namespace std;

void isArmstrongNumber(int n){
    vector<int>arr;
    int temp = n;
    while(temp>0){
        arr.push_back(temp%10);
        temp/=10;
    }
    int res = arr[0];
    for(int i=0; i<arr.size()-1; i++){
       for(int j=i+1; j<arr.size(); j++){
            res = arr[i]^arr[j];
       }
    }

    if(res == n){
        cout<<n<<" Yes, it is an Armstrong Number"<<endl;
    }
    else{
        cout<<n<<" No, it is not an Armstrong Number"<<endl;
    }
}

int main()
{
    int n = 170;
    // isArmstrongNumber(n);
    isArmstrongNumber(153);

    return 0;
}
