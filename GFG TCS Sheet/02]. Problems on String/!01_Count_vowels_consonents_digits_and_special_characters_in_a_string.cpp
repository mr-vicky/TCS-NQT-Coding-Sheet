/*
Given a string and the task is to count vowels, consonant, digits and special character in string. Special character also contains the white space.
Examples: 
 

Input : str = "geeks for geeks121"
Output : Vowels: 5
         Consonant: 8
         Digit: 3
         Special Character: 2

Input : str = " A1 B@ d  adc"
Output : Vowels: 2
         Consonant: 4
         Digit: 1
         Special Character: 6
*/ 

#include<iostream>
using namespace std;

void getCount(string s){
    int count_vowels=0;
    int count_consonents=0;
    int count_digits=0;

    for(int i=0; i<s.length(); i++){
        if('0' <=s[i] && s[i]>='9'){
            count_digits++;
        }
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count_vowels++;
        }else
        {
            count_consonents++;        
        }
    }
    cout<<"digits : "<<count_digits<<endl;
    cout<<"Vowels: "<<count_vowels<<endl;
    cout<<"Consonents: "<<count_consonents<<endl;
    cout<<endl;
}

int main(){
    string s="geeks for Geeks121";
    getCount(s);
    return 0;
}