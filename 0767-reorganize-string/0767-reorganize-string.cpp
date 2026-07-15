class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        for(char &c: s){
            mp[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto &p: mp){
            pq.push({p.second, p.first});
        }
        pair<int, char> prev;
        string ans="";
        while(!pq.empty()){
            auto current= pq.top();
            pq.pop();
            ans+= current.second;
            current.first--;
            if (prev.first>0){
                pq.push(prev);
            }
            prev=current;
        }
        if(s.size() != ans.size()) return "";
        return ans;
    }
};