// Remove duplicate elements from sorted Array
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        set<int>s(a, a+n);
        vector<int>v(s.begin(), s.end());
        for(int i=0; i<s.size(); i++){
            a[i]=v[i];
        }
        return v.size();
    }
};