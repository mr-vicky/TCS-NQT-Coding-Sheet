#include<iostream>
using namespace std;

// Best Case TC: O(n)
// Average Case TC: O(n*n)
// Worst Case TC: O(n*n)
// Bubble Sort is Stable
// Bubble Sort is Adaptive
int BubbleSort(int arr[], int n)
{
    int flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        } 
        if(flag==0){
            break;
        }
    }
    cout<<endl;
}

int main(){
    int arr[]{3,4,2,1,5,6,9,8,7};
    int n=9;
    for(auto x: arr) cout<<x<<" ";
    BubbleSort(arr, n);
    for(auto x: arr) cout<<x<<" ";
    return 0;
}