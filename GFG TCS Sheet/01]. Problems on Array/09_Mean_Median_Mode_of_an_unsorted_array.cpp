/* 
Given an unsorted array a[] of size N, the task is to find its mean and median. 

Mean of an array = (sum of all elements) / (number of elements)

The median of a sorted array of size N is defined as the middle element when N is odd and average of middle two elements when N is even. Since the array is not sorted here, we sort the array first, then apply above formula.

Examples: 

Input: a[] = {1, 3, 4, 2, 6, 5, 8, 7}
Output: Mean = 4.5, Median = 4.5
Explanation: Sum of the elements is 1 + 3 + 4 + 2 + 6 + 5 + 8 + 7 = 36, Mean = 36/8 = 4.5
Since number of elements are even, median is average of 4th and 5th largest elements, which means Median = (4 + 5)/2 = 4.5

Input: a[] = {4, 4, 4, 4, 4}
Output: Mean = 4, Median = 4 
*/

#include<bits/stdc++.h>
using namespace std;

double getMean(double a[], int n){
    double sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return sum/n;
}

double getMedian(double a[], int n){
    if(n%2==0){
        return (a[n/2]+a[(n/2)+1])/2;
    }
    else{
        return a[(n/2)+1];
    }
}


void getMeanMedian(double a[], int n){
    sort(a, a+n);
    cout<<getMean(a, n)<<" "<<getMedian(a, n)<<endl;
}

int main()
{
    double a[] = {1, 3, 4, 2, 6, 5, 8, 7};
    getMeanMedian(a, 8);

    double a2[] = {4, 4, 4, 4, 4};
    getMeanMedian(a2, 4);
    return 0;
}
