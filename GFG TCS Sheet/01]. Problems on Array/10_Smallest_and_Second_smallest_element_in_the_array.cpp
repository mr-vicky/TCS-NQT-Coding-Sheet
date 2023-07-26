/*
Given an array of integers, your task is to find the smallest and second smallest element in the array. If smallest and second smallest do not exist, print -1.

Example 1:

Input :
5
2 4 3 5 6
Output :
2 3 
Explanation: 
2 and 3 are respectively the smallest 
and second smallest elements in the array.

Example 2:

Input :
6
1 2 1 3 6 7
Output :
1 2 
Explanation: 
1 and 2 are respectively the smallest 
and second smallest elements in the array.
*/ 

vector<int> minAnd2ndMin(int a[], int n) {
    int s1=INT_MAX, s2=INT_MAX;
    set<int>s(a, a+n);
    if(s.size()<=1){
        return {-1};
    }
    
    
    for(int i=0; i<n; i++){
        s1=min(s1, a[i]);
    }
    
    for(int i=0; i<n; i++){
        if(a[i]!=s1){
            s2=min(s2, a[i]);
        }
    }
    
    return {s1, s2};
} 