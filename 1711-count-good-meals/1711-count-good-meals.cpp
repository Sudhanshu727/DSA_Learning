class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int>freq;
        vector<int> power(22);
        int ans=0;
        for(int i=0; i<22;i++){
            power[i]= 1<<i;
        }
        int mod= 7+1e9;
        for(int x:deliciousness){
            for(int p: power){
                ans= (ans+freq[p-x])%mod;
            }
            freq[x]++;
        }
        return ans;

    }
};