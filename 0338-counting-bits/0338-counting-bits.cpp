class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ans;
        for(int x=0; x<=n; x++){
            int cnt=0;
            int i=x;
            while(i!=0){
                i=i&(i-1);
                cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};