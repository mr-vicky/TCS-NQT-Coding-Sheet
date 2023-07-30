#include<bits/stdc++.h>
using namespace std;

// Worst Case TC: O(n*n)
// Average Case TC: O(n*n)
void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int x=arr[i];
        while(j>=0 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    cout<<endl;
}

int main(){
    int arr[]{3,2,4,1,5,7,6,9,8};
    int n=9;
    for(auto x: arr) cout<<x<<" ";
    InsertionSort(arr, n);
    for(auto x: arr) cout<<x<<" ";
    return 0;
}