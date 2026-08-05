class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>edges(n);
        vector<int> indegree(n,0);
        vector<bool> sus(n);

        for(const auto& inv: invocations){
            edges[inv[0]].push_back(inv[1]);
            indegree[inv[1]]++;
        }

        queue<int>q;
        q.push(k);
        sus[k]= 1;
        while(!q.empty()){
            int u= q.front();
            q.pop();
            for(int v: edges[u]){
                indegree[v]--;

                if(!sus[v]){
                    sus[v]=1;
                    q.push(v);
                }
            }
        }
        bool canRemoveAll=1;
        vector<int> rem;
        for(int i=0; i<n; i++){
            if (sus[i] && indegree[i]>0){
                canRemoveAll= false;
                break;
            }
            else if(!sus[i]){
                rem.push_back(i);
            }
        }

        if(!canRemoveAll){
            vector<int> allNodes(n);
            iota(allNodes.begin(), allNodes.end(), 0);
            return allNodes;
        }
        return rem;
    }
};