/*
Check if the given number is Harshad(Or Niven) Number
Problem Statement: Check if the number is a Harshad(or Niven) number or not.

Examples:

Example 1:
Input: 378
Output: Yes it is a Harshad number.
Explanation: 3+7+8=18. 378 is divisible by 18. Therefore 378 is a harshad number.

Example 2:
Input: 379
Output: No
 it is not a Harshad number.
Explanation: 3+7+9=19. 379 is not divisible by 19. Therefore 379 is a harshad number.
*/ 

#include<bits/stdc++.h>
using namespace std;

void isNiven(int n){
    vector<int>arr;
    int temp = n;
    while(temp>0){
        arr.push_back(temp%10);
        temp /= 10;
    }
    int sum = 0;
    sum = accumulate(arr.begin(), arr.end(), sum);

    if(n%sum==0){
        cout<<n<<" Yes it is a Harshad number."<<endl;
    }
    else{
        cout<<n<<" No, it is not a Harshad number."<<endl;
    }
}

int main()
{
    int n = 378;

    isNiven(n);
    isNiven(389);
    isNiven(1925);
    return 0;
}
