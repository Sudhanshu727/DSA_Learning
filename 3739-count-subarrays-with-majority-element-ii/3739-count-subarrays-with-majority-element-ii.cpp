class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int,int> prefFreq;
        long long ans=0; 
        int valid=0, pref=0;
        prefFreq[0]=1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                valid+= prefFreq[pref++];
            }
            else {
                valid-= prefFreq[--pref];
            }

            ans+= valid;
            prefFreq[pref]++;
        }
        return ans;
    }
};