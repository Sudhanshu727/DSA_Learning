class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        int mx=0;
        vector<int>prefixGcd(n);
        for (int i=0; i<n; i++){
            mx= max(mx, nums[i]);
            prefixGcd[i]= gcd(mx, nums[i]);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int sum=0;
        for(int i=0, j=n-1; i<n/2; i++, j--){
            sum+= gcd(prefixGcd[i], prefixGcd[j]);
        }
        return sum;
        
    }
};