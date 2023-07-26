// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        vector<int>v;
        int temp=N;
        int sum=0;
        while(temp>0){
            sum+=temp%10;
            temp/=10;
        }
       
        while(sum>0){
            v.push_back(sum%10);
            sum/=10;
        }
        int l=0;
        int r=v.size()-1;
        
        if(v.size()==1){
            return 1;
        }
        
        while(l<r){
            if(v[l]!=v[r]){
                return 0;
            }
            l++;
            r--;
        }
        return 1;
    }
};