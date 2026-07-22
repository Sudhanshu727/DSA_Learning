class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0, curr=0;
        for (int &it:nums){
            if(it==0){
                curr=0;
            }
            else{
                curr++;
            }
            ans= max(ans, curr);
        }
        return ans;
    }
};