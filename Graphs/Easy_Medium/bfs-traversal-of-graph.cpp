class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int src=0;
        vector<bool> visited(V, false);
        queue<int> q;
        q.push(src);
        vector<int> bfs;
        bfs.push_back(src);
        while(!q.empty())
        {
            src=q.front();
            for(int i=0; i<adj[src].size(); i++)
            {
                if(visited[adj[src][i]]==false)
                {
                    visited[adj[src][i]]=true;
                    bfs.push_back(adj[src][i]);
                    q.push(adj[src][i]);
                }
            }
            q.pop();
        }
        return bfs;
    }
};
