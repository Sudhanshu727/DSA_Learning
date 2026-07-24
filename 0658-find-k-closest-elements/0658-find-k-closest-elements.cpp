class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0;
        int r= arr.size()-1;
        vector<int> ans;
        while(r-l>=k){
            if(abs(arr[l]-x)> abs(arr[r]-x)){
                l++;
            }
            else r--;
        }
        while(l<=r){
            ans.push_back(arr[l]);
            l++;
        }
        return ans;

    }
};