class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>v;
        
        int row = matrix.size();
        int column = matrix[0].size();
        
        for(int i=0;i<row;i++){
            if(i%2==0){
                for(int j = 0;j<column;j++){
                    v.push_back(matrix[i][j]);
                }
            }
            else{
                 for(int j = column-1;j>=0;j--){
                    v.push_back(matrix[i][j]);
                }
            }
        }
        return v;
        
      
    }
};
