class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n= events.size();
        sort(events.begin(), events.end());
        int firstd= events[0][0];
        int lastd=0;
        for(auto& it : events){
            lastd= max(lastd, it[1]);
        }
        int j=0, ans=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=firstd; i<=lastd; i++ ){
            while(!pq.empty() && pq.top()<i){
                pq.pop();
            }
            while(j<n && events[j][0]==i){
                pq.push(events[j][1]);
                j++;
            }
            if(!pq.empty()){
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
};