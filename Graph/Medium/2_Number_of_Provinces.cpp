class Solution {
  public:
  
  void dfs(int node, vector<int>adsls[], int visited[]){
      visited[node] = 1;
      for(auto it:adsls[node]){
          if(!visited[it]){
              dfs(it,adsls,visited);
          }
      }
  }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int count = 0;
        vector<int>adjls[V];
        
        int visited[V] = {0};
        
        
        //convert matrix to list
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j] == 1){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                count++;
                dfs(i,adjls,visited);
            }
        }
        
        return count;
    }
};
