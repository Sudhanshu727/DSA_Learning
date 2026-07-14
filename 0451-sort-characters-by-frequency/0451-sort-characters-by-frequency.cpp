class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto &c: s){
            mp[c]++;
        }
        vector<pair<char,int>> store;
        for(auto& pair:mp){
            store.push_back({pair.first, pair.second});
        }
        sort(store.begin(), store.end(),
        [](auto &a, auto &b){
            return a.second>b.second;
        });
        string ans="";
        for(int i=0; i<store.size(); i++){
            ans+= string(store[i].second, store[i].first);
        }
        return ans;
    }
};