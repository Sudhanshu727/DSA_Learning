class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;

        vector<int> merged = intervals[0];
        for (int i = 1; i < n; i++) {
            if (merged[1] >= intervals[i][0]) {
                merged[0] = min(merged[0], intervals[i][0]);
                merged[1] = max(merged[1], intervals[i][1]);
            } else {
                ans.push_back(merged);
                merged = intervals[i];
                continue;
            }
        }
        ans.push_back(merged);
        return ans;
    }
};