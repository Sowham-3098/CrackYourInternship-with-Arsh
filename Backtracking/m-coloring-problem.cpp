class Solution{
public:
bool isValid(vector<vector<int>> &adj, vector<int>& colored,  int node, int color){
        
        if(colored[node]){
            return false;
        }
        
        for(auto u : adj[node]){
            if(colored[u] == color){
                return false;
            }
        }
        
        return true;
    }
    
    bool graphColoringHelper(vector<vector<int>>&adj,vector<int>&colored,int m,int n,int idx){
        if(idx==n)return true;
        
        
        for(int i=1;i<=m;i++){
            if(isValid(adj,colored,idx,i)){
                colored[idx]=i;
                if(graphColoringHelper(adj,colored,m,n,idx+1))return true;
                
                
                 colored[idx]=0;
            }
           
        }
        return false;
    }
    
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        int N=101;
        vector<vector<int>>adj(n);
        vector<int>colored(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(graph[i][j])
                adj[i].push_back(j);
            }
        }
        return graphColoringHelper(adj,colored,m,n,0);
    }
};
