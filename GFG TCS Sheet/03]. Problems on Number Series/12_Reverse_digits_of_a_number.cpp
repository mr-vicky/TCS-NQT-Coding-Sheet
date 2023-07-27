/*
Write a program to reverse the digits of an integer.



Examples :  

Input : num = 12345
Output: 54321

Input : num = 876
Output: 678

*/ 
#include<iostream>
using namespace std;

int getReverse(int num){
    int res=0;
    while(num>0){
        res=(res*10)+num%10;
        num/=10;
    }
    return res;
}

int main()
{
    int num=12345;
    cout<<getReverse(num)<<endl;
    cout<<getReverse(876)<<endl;
    return 0;
}
