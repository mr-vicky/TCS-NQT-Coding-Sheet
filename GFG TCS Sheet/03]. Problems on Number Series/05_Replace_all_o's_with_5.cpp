class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
        int res=0;
        vector<int>v;
        while(n>0){
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            if(v[i]==0){
                res=(res*10)+5;
            }
            else{
                res=(res*10)+v[i];
            }
        }
        return res;
    }
};