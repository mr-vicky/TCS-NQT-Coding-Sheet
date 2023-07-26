class Solution {
  public:
    int mean(int N , int A[]) {
        // code here
        double avg=0;
        double sum=0;
        for(int i=0; i<N; i++){
            sum+=A[i];
        }
        avg=floor(sum/N);
        return avg;
    }
};

