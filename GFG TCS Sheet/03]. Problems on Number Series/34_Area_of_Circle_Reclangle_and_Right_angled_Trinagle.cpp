class Solution {
  public:
    vector<int> getAreas(int L , int W , int B , int H , int R) {
        // code here
        vector<int>v;
        v.push_back(L*W); // Rectangle
        v.push_back(0.5*B*H); // Right Angled Triangle
        v.push_back(3.14*(R*R)); // Circle
        return v;
    }
};