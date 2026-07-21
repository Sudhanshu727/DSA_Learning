class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n= s.length();
        int curr=0;
        int prev= INT_MIN;
        int maxZero=0;
        int initialOnes=0;

        for (int i=0; i<n; i++){
            if(s[i]=='0') curr++;
            else{
                initialOnes++;

                if(curr>0){
                    maxZero= max(maxZero, curr+prev);
                    prev= curr;

                }
                curr=0;
            }
        }
        if(curr>0){
            maxZero= max(maxZero, curr+prev);
        }
        return maxZero+initialOnes;
    }
};