class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> vect) {
        // code here
        int sum = 0;
        for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
       sum = sum + vect[i][j];
        }
  
    } 
    return sum;
    }
};
