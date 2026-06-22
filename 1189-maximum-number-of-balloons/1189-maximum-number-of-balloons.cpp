class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string s= "balloon";
        unordered_map<char,int>mp1;
        unordered_map<char, int>mp2;
        for(auto c:s){
            mp1[c]++;
        }
        for (auto x : text){
            mp2[x]++;
        }
        int times= INT_MAX;
        for (auto p: mp1){
            times= min(times, mp2[p.first]/p.second);
        }
        return times;
        
    }
};