class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string res="";
        int n=s.length();
        for(int i=0; i<n; i++){
            if(s[i]!=' '){
                res+=s[i];
            }
        }
        return res;
    }
};