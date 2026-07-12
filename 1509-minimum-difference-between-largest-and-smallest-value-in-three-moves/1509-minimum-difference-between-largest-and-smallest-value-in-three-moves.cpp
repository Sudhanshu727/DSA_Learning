class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int ans=0, diff=0;
         
        if (n>=5){
            //last 3 reduced
            diff= nums[n-4] - nums[0];
            ans= diff;

            //first 3 increased
            diff= nums[n-1]- nums[3];
            ans= min(ans,diff);

            //small 2, big 1
            diff= nums[n-2]-nums[2];
            ans= min(ans, diff);

            //small 1, big 2
            diff = nums[n-3]-nums[1];
            ans= min(ans, diff);

        }
        // else if (n==5){
        //     return min(nums[4]-nums[3], nums[1]-nums[0]);
        // }
        // return min((nums[n-4]-nums[0]),(nums[n-1]-nums[n-4]));

        return ans;
    }
};