class Solution {
public:
    string smallestPalindrome(string s) {
        int n= s.size();
        string ans="";
        sort(s.begin(), s.begin()+n/2);
        string fHalf= s.substr(0, n/2);
        ans+= fHalf;
        if (n&1) ans+= s[n/2];
        reverse(fHalf.begin(), fHalf.end());
        ans+=fHalf;
        return ans;
    }
};