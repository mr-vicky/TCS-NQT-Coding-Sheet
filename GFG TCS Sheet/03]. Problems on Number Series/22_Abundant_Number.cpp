/*
A number n is said to be an Abundant Number if the sum of all the proper divisors of the number denoted by sum(n) is greater than the value of the number n. And the difference between these two values is called abundance. 
Mathematically, if the below condition holds the number is said to be an Abundant number:

sum(n)> n
abundance =  sum(n) - n
sum(n): aliquot sum - The sum of all proper divisors of n
Given a number n, our task is to find if this number is an Abundant number or not. 
The first few Abundant Numbers are: 12, 18, 20, 24, 30, 36, 40, 42, 48, 54, 56, 60, 66 ….. 

Abundant Numbers

Examples:

Input: 21
Output: NO

Input: 12
Output: YES

Input: 17
Output: NO
*/ 

#include<iostream>
using namespace std;

string isAbundant(int n){
    // vector<int>v;
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }

    if(sum>n){
        return "YES";
    }else{
        return "NO";   
    }
}

int main()
{
    int n=21;
    cout<<isAbundant(n)<<endl;
    cout<<isAbundant(12)<<endl;
    cout<<isAbundant(17)<<endl;
    return 0;
}
