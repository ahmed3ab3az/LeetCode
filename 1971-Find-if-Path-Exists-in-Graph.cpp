class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);
        
        // Build adjacency list
        for (const auto &edge: edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        stack<int> st;
        st.push(source);
        
        while(!st.empty()) {
            int current = st.top();
            st.pop();
            
            if(current == destination) return true;
            
            // Skip if already visited
            if(visited[current]) continue;
            
            // Mark as visited before exploring neighbors
            visited[current] = true;
            
            // Add unvisited neighbors
            for(const auto &neighbor: adj[current]) {
                if(!visited[neighbor]) {
                    st.push(neighbor);
                }
            }
        }
        return false;
    }
};