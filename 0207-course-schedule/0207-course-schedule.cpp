class Solution {
private:
    bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &pathvis){
        vis[node]=1;
        pathvis[node]=1;
        for (auto adjnode: adj[node]){
            if (!vis[adjnode]){
                if (dfs(adjnode, adj, vis, pathvis)) return true;
            }
            else if (pathvis[adjnode]) return true;
        }
        pathvis[node]=0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for (auto &it : prerequisites){
            int course = it[0];
            int prereq = it[1];

            adj[prereq].push_back(course);

        }
        vector<int> vis(numCourses, 0);
        vector<int> pathvis(numCourses, 0);
        for (int i=0; i<numCourses; i++){
            if (!vis[i]){
                if (dfs(i, adj, vis, pathvis)) return false;
            }
        }
        return true;
    }
};