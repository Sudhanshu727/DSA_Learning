class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        
        if(n==3){
            return nums[0]*nums[1]*nums[2];
        }
        // if(nums[0]<0 && nums[n-1]<0) return nums[0]*nums[1]*nums[2];
        
        int prod1= nums[0]*nums[1]*nums[n-1];
        int prod2= INT_MIN;
        if(n>4){
            prod2= nums[2]*nums[n-2]*nums[n-1];
        }
        int prod3= nums[n-3]*nums[n-2]*nums[n-1];
        
        return max({prod1,prod2,prod3});
    }
};