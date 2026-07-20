class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0;
        int rightsum=0;
        int n= nums.size();
        for (int &i:nums){
            rightsum+=i;
        }
        for(int i=0; i<n;i++){
            rightsum-= nums[i];
            if(rightsum==leftsum){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};