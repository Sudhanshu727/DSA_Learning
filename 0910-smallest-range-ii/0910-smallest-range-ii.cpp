class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n= nums.size(), ans=nums[n-1]-nums[0];
        
        if (n==1) return 0;
        for(int i=0; i<n-1; i++){
            int maxi= max(nums[i]+k, nums[n-1]-k);
            int mini= min(nums[0]+k, nums[i+1]-k);
            ans= min(maxi-mini, ans);
        }
        return ans;
    }
};