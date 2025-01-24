class Solution {
public:
    bool dfs(int i,vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&inStack){
        if(inStack[i]){
            return true;
        }
        if(visited[i]){
            return false;
        }
        inStack[i]=true;
        visited[i]=true;
        for(auto neighbor:adj[i]){
            if(dfs(neighbor,adj,visited,inStack)){
                return true;
            }
        }
        inStack[i]=false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<bool>visited(n),inStack(n);
        for(int i=0;i<n;i++){
            dfs(i,graph,visited,inStack);
        }
        vector<int>safestates;
        for(int i=0;i<n;i++){
            if(!inStack[i]){
                safestates.push_back(i);
            }
        }
        return safestates;
    }
};