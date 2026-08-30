class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        int minInd=0;
        int maxInd=0;
        int maxi= *max_element(nums.begin(), nums.end());
        int mini= *min_element(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]==maxi){
                maxInd= i;
            }
            else if(nums[i]==mini){
                minInd=i;
            }
        }
        return min({max(maxInd, minInd)+1, n-min(minInd,maxInd), min(maxInd+1, n-maxInd) + min(minInd+1, n-minInd)});
    }
};