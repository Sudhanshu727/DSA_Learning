class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<vector<int>>ans;
        for (int i=0; i<=n; i++){
            ans.push_back({i-ranges[i], i+ranges[i]});
            
        }
        sort(ans.begin(), ans.end());
        if(ans[0][0]>0) return -1;
        int currEnd=0, cnt=0, i=0;
        
        while(currEnd<n){
            int farEnd= currEnd;
            while(i<=n && ans[i][0]<=currEnd){
                farEnd= max(farEnd, ans[i][1]);
                i++;
            }
            if(farEnd==currEnd) return -1;

            currEnd= farEnd;
            cnt++;
        }
        return cnt;
    }
};