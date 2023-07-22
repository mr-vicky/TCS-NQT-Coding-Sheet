//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i=0; 
	    int j=S.length()-1;
	    while(i<j){
	        if(S[i]!=S[j])
	            return 0;
    	    i++;
    	    j--;
	    }
	    return 1;
	}

};