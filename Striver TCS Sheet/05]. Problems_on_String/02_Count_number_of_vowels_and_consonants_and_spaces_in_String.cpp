/*
Count number of vowels, consonants, spaces in String
Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.

Examples:

Example 1:
Input: string str=”Take u forward is Awesome”
Output: 
Vowels: 10
Consonants: 11
White spaces: 4
Explanation: 

Example 2:
Input: string str=”India won the cricket match”
Output:
Vowels: 8
Consonants: 15
White spaces: 4
*/ 

#include<iostream>
using namespace std;

void solve(string str, int n){
    int count_v = 0;
    int count_c = 0;
    int count_s = 0;

    for(int i=0; i<n; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count_v++;
            cout<<str[i]<<" ";
        }
        else if(str[i]!=' '){
            count_c++;
            // cout<<str[i]<<" ";

        }

        if(str[i]==' '){
            count_s++;
            // cout<<str[i]<<" ";
        }
    }
    cout<<endl<<endl;

    cout<<"Vowels: "<<count_v<<endl;
    cout<<"Consonents: "<<count_c<<endl;
    cout<<"Spaces: "<<count_s<<endl;

}

int main()
{
    string str = "India won the cricket match";
    int length = str.length();
    solve(str, length);

    string str2 = "Nineteen twenty five";
    int length2 = str2.length();
    solve(str2, length2);
    return 0;
}
