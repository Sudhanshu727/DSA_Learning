class Solution {
private:
    int linear(vector<int>& nums, int l, int r) {
        int next1 = 0, next2 = 0;
        int n = nums.size();
        for (int i = r; i >= l; i--) {
            int curr = max(nums[i] + next2, next1);
            next2 = next1;
            next1 = curr;
        }
        return next1;
    }

public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums[0];
        return max(linear(nums, 0, n - 2), linear(nums, 1, n - 1));
    }
};