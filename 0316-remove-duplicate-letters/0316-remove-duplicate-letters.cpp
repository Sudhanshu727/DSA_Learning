class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>seen(26,0);
        unordered_map<char, int> mp;
        string ans="";
        for (char &c: s){
            mp[c]++;
        }
        stack<char> st;
        for (int i=0; i<s.length(); i++){
            char c= s[i];
            mp[c]--;
            if(seen[c-'a']) continue;
            while(!st.empty() && st.top()> c && mp[st.top()]>0){
                seen[st.top()-'a']=0;
                st.pop();
            }
            st.push(c);
            seen[c-'a']=1;

            
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};