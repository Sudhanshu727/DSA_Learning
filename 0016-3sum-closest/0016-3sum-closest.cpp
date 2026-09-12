class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int diff= INT_MAX;
        int ans=-1;
        int n= nums.size();
        for(int i=0; i<n; i++){
            int j=i+1;
            int k= n-1;
            while(j<k){
                int sum= nums[i]+nums[j]+nums[k];
                int current= abs(target-sum);

                if(current<diff){
                    diff=current;
                    ans=sum;
                }

                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return target;
                }
            }
            
        }
        return ans;
    }
};