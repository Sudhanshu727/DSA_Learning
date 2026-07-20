class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        for(int &i:nums){
            leftsum+=i;
        }
        for(int i=0; i<nums.size(); i++){
            leftsum-=nums[i];
            if(rightsum==leftsum){
                return i;
            }
            rightsum+= nums[i];
        }
        return -1;
    }
};