class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int product = k * threshold;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (i >= k) {
                sum -= arr[i-k];
            }
            sum += arr[i];
            if (i >= k-1) {
                ans += (sum >= product);
            }
        }
        return ans;
    }
};