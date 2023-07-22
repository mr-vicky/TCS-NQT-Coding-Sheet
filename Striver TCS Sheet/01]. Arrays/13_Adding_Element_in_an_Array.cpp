/*
Adding Element in an Array
Problem Statement: Given an array of N integers, write a program to add an array element at the beginning, end, and at a specific position.

Example:
Input: N = 5, array[] = {1,2,3,4,5}
insertbeginning(6)
insertending(7)
insertatpos(8,4)
Output: 6,1,2,8,3,4,5,7
Explanation: 6 is added at the beginning and 7 is added at the end and 8 is added at position 4
*/ 

#include<bits/stdc++.h>
using namespace std;

// Inserting the element at the BEGINNING
void insertatbegin(int arr[], int n, int value){
    for(int i=n-1; i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    n= n+1;
}

// Inserting at the END
void insertatEnd(int arr[], int n, int value){
    arr[n]=value;
}

// Insertion at specific position
void insertatposition(int arr[], int n, int value, int pos){
    for(int i=n-1; i>=pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;

}

int main()
{
    int arr[9]={10,9,14,8,20,48,16,9};
    int n=8;
    int value=40;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertatbegin(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;



    // ----------------------INSERTING at the end --------------------------
    value = 999;
    cout<<"Before inserting the value at beginning:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatEnd(arr,n,value);
    cout<<"After inserting the value at beginning:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

    // ------------------ INSERTING at Specific position -------------------
    value = 100;
    int pos = 5;
    
    cout<<"Before inserting the value at Specific location:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertatposition(arr,n,value,pos);
    cout<<"After inserting the value at specific location:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}