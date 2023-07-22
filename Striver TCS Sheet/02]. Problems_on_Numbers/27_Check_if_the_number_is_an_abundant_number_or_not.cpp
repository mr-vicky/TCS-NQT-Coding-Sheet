/*
Check if the number is an abundant number or not
Problem Statement: Check if the number is an abundant number or not.

Examples:

Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.

Example 2:
Input: 21
Output: Not Abundant Number
Explanation:Divisors of 21 are 1,3,7. 1+3+7=11, Since 11 is smaller than 21, 11 is not an abundant number.
*/ 

#include<bits/stdc++.h>
using namespace std;

void isAbundant(int n){
    vector<int>arr;
    int temp = n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    int sum = 0;
    sum = accumulate(arr.begin(), arr.end(), sum);

    if(sum > n){
        cout<<n<<" is a Abundant Number"<<endl;
    }
    else{
        cout<<n<<" is not Abundant Number"<<endl;
    }

}

int main(){
    int n = 18;
    isAbundant(n);
    isAbundant(21);
    isAbundant(1925);
}