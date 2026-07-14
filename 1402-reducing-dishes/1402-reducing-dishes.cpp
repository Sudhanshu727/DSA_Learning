class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int n= satisfaction.size();
        int ans=0;
        int sum= ans;
        for(int i=n-1; i>=0; i--){
            int current = ans+ sum+ satisfaction[i];
            if (current< ans) break;
            sum+= satisfaction[i];
            ans=current;
        }
        return ans;
    }
};