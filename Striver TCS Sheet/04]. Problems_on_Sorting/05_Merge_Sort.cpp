/*
Merge Sort Algorithm
Problem:  Given an array of size n, sort the array using Merge Sort.

Examples:

Example 1:
Input: N=5, arr[]={4,2,1,6,7}
Output: 1,2,4,6,7,


Example 2:
Input: N=7,arr[]={3,2,8,5,1,4,23}
Output: 1,2,3,4,5,8,23
*/
#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++){
        b[i]=arr[mid+1+i];
    }
    int i=0; int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            j++;
        }
        else
        {
            arr[k]=b[j];
            k++; 
            j++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++; 
        i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[]={5,4,3,2,1};
    mergeSort(arr, 0, 4);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
