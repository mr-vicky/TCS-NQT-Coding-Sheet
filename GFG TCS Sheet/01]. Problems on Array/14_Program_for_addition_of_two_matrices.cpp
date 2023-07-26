// Addition of two square matrices

//User function Template for C++
class Solution {
public:
    void Addition(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        // Code here
        int m=matrixA.size();
        int n=matrixB.size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                matrixA[i][j]+=matrixB[i][j];
            }
        }
    }
};