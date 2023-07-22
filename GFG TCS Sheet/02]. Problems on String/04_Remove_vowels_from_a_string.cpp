//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    int n=S.length();
	    string res="";
	    for(int i=0; i<n; i++){
	       if(S[i]!='a' && S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u'){
	           res+=S[i];
	       }
	    }
	    return res;
	}
};