class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0, right=0, len=0;
        int n= nums.size();
        unordered_map<int,int> mp;
        while(right<n){
            mp[nums[right]]++;

            while(mp[nums[right]]>k){
                mp[nums[left]]--;
                left++;
            }
            len= max(len, right-left+1);
            right++;
        }
        return len;
    }
};