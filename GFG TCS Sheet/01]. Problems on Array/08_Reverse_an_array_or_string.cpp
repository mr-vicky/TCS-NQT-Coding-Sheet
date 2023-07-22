//User function Template for C++

string reverseWord(string str){
    int l=0; 
    int r=str.length()-1;
    
    while(l<r){
        int temp = str[l];
        str[l]=str[r];
        str[r]=temp;
        l++;
        r--;
    }
    return str;
  //Your code here
}
