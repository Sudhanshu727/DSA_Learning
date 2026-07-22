class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, ans = INT_MAX;
        int sum = nums[0];
        if (sum >= target)
            return 1;
        for (int r = 1; r < nums.size(); r++) {
            sum += nums[r];
            while (sum >= target && l <= r) {
                ans = min(ans, r - l + 1);
                sum -= nums[l];
                l++;
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};