/*
Given a number n, the task is to check whether the given number is positive, negative, odd, even, or zero.
input : num = -98;
*/ 


#include<iostream>
using namespace std;

// void getOddOrEven(int &num);
// void checkNumber(int &num);
void getOddEven(int &num){
    if(num%2==0){
        cout<<" Even "<<endl;
    }else{
        cout<<" Odd "<<endl;
    }
}

void checkNumber(int &num){
    if(num>0){
        cout<<" Positive ";
    }else if(num<0){
        cout<<" Negative ";
    }
    else{
        cout<<" Zero ";
    }
}

int main()
{
    int num=-98;
    checkNumber(num);
    getOddEven(num);
    return 0;
}


