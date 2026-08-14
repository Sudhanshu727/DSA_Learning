class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int ans = 0;
        for (int left = 0; left < n; left++) {
            vector<int> count(26);
            for (int right = left; right < n; right++) {

                count[s[right] - 'a']++;
                if (count[s[right] - 'a'] > 2) {
                    break;
                }
                ans= max(ans, right-left+1);
            }
        }
        return ans;
    }
};