/*
Given a number N. The task is to find the largest and the smallest digit of the number.
Examples :

Input : N = 2346 
Output : 6 2 
6 is the largest digit and 2 is smallest
Input : N = 5 
Output : 5 5
*/ 

#include<bits/stdc++.h>
using namespace std;

void getLargestAndSmallest(int n){
    vector<int>v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }
    sort(v.begin(), v.end());
    cout<<v[v.size()-1]<<" "<<v[0];
    cout<<endl;
}

int main()
{
    int n=2346;
    getLargestAndSmallest(n);
    getLargestAndSmallest(5);
    return 0;
}
