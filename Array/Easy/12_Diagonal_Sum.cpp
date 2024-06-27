class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int sum = 0;
       for (int i = 0; i < matrix.size(); ++i) { 
          
            sum = sum + matrix[i][i]; 
            
           
            sum = sum + matrix[i][matrix.size() - i - 1]; 
        } 
            
        return sum;
    }
};
