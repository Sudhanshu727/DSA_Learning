class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        set<int, greater<int>> st(nums.begin(), nums.end());
        int stmax = *max_element(st.begin(), st.end());

        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        int maxi = *max_element(nums.begin(), nums.end());
        if (n == k) {

            return maxi;
        }
        if (k == 1) {
            for (int x : st) {
                if (mp[x] == 1)

                    return x;
            }
        }

        if (mp[nums[0]] == 1 && mp[nums[n - 1]] > 1) {
            return nums[0];
        } else if (mp[nums[n - 1]] == 1 && mp[nums[0]] > 1) {
            return nums[n - 1];
        } else if (mp[nums[0]] == 1 && mp[nums[n - 1]] == 1) {
            return max(nums[0], nums[n - 1]);
        }

        return -1;
    }
};