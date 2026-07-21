class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long rightsum=0, leftsum=0, ans=0;
        for(auto &i: nums){
            rightsum+= i;
        }
        for(int i=0; i<nums.size()-1; i++){
            leftsum+=nums[i];
            rightsum-=nums[i];
            if(leftsum>= rightsum) ans++;

        }
        return ans;

    }
};