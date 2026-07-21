class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int comp = threshold*k;
        int sum=0, n= arr.size();
        for(int i=0; i<k; i++){
            sum+= arr[i];
        }
        int ans= (sum>=comp);

        for(int i=0, j=k; j<n; j++, i++){
            sum-= arr[i];
            sum+= arr[j];

            ans+= (sum>=comp);
        }
        return ans;
    }
};