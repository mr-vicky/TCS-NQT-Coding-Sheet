class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int sum=0;
        while(N>0){
            sum+=N%10;
            N/=10;
        }
        return sum;
    }
};