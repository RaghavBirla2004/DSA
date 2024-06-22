class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int lower = 0, upper = 0;
        //lower
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<=i;j++){
                lower = lower + matrix[i][j];
            }
        }
        //upper

        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
                upper = upper + matrix[i][j];
            }
        }
        vector<int>v = {upper,lower};
    return v;
    }
    
};
