class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int m=a.length();
        int n=b.length();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a==b){
            return true;
        }
        else{
            return false;
        }
    }

};