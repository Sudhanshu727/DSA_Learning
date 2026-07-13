class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for(auto &w:words){
            freq[w]++;
        }
        vector<pair<int, string>> arr;
        for(auto it:freq){
            
            arr.push_back({it.second, it.first});
        }
        sort(arr.begin(), arr.end(),
        [](pair<int, string>& a, pair<int, string>&b){
            if(a.first==b.first){
                return a.second<b.second;

            }
            return a.first>b.first;
        });

        vector<string>ans;
        for(auto &it:arr){
            if(ans.size()==k){
                break;
            }
            ans.push_back(it.second);
        }
        return ans;

    }
};