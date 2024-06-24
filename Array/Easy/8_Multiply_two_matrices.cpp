class Solution {
public:
    void Multiply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        // Code here
        int n1 = matrixA.size();
        int n2 = matrixB.size();
        
        int m1 = matrixA[0].size();
        int m2 = matrixB[0].size();
        
        vector<vector<int>>ans;
        
        if(m1==n2){
            for(int i=0;i<n1;i++){
                vector<int>temp;
                for(int j=0;j<m2;j++){
                     int sum = 0;
                for(int k=0;k<m1;k++){
                    sum = sum + (matrixA[i][j] *matrixB[k][j]);
                }
                temp.push_back(sum);
                }
               
            }
            ans.push_back(temp);
        }
        }
        return ans;
    }
};
