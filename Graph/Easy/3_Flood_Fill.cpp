class Solution {
public:

bool isvalid(vector<vector<int>>& image, int i, int j, int n, int m, int color){
    if(i>=0 && i<n && j>=0 && j<m && image[i][j] == color){
        return true;
    }
    return false;
}

void dfs(vector<vector<int>>& image, int i,int j, int n,int m, int color, int newcolor){
image[i][j] = newcolor;

 if(isvalid(image,i +1, j,n,m,color)){
     dfs(image, i+1, j, n ,m, color, newcolor);
 }

  if(isvalid(image,i -1, j,n,m,color)){
     dfs(image, i-1, j, n ,m, color, newcolor);
 }

  if(isvalid(image,i , j+1,n,m,color)){
     dfs(image, i, j+1, n ,m, color, newcolor);
 }

  if(isvalid(image,i , j-1,n,m,color)){
     dfs(image, i, j-1, n ,m, color, newcolor);
 }
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int n = image.size();
        int m =image[0].size();
        int color = image[sr][sc];
 if(color == newcolor)
            return image;
        dfs(image,sr,sc,n,m,color,newcolor);
        return image;
    }
};
