class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ans;
        int missing=0;
        int n= nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]==2){
                missing= nums[i]+1;
            }
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        if(missing==0){
            missing= (nums[n-1]==n?1:n);
        }
        ans.push_back(missing);
        return ans;
    }
};