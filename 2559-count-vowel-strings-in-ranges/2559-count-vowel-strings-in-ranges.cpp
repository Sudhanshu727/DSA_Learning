class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        string v= "aeiou";
        vector<int>pref(words.size()+1, 0);

        for(int i=0; i<words.size(); i++){
            pref[i+1]=pref[i];
            if(v.find(words[i][0])!= string::npos && v.find(words[i].back())!= string::npos){
                // pref[i+1]= pref[i]+1;
                pref[i+1]++;
            }
        }
        vector<int>ans;

        for(int i=0; i<queries.size(); i++){
            ans.push_back(pref[queries[i][1]+1]-pref[queries[i][0]]);
        }

        return ans;
    }
};