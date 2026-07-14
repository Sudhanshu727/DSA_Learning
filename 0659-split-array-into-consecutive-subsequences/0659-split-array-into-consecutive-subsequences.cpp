class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        unordered_map<int, int> end;
        for (int i=0; i<nums.size(); i++){
            int x= nums[i];
            if(freq[x]==0) continue;

            if(end[x-1]){
                end[x-1]--;
                end[x]++;
                freq[x]--;
                continue;
            }
            if(freq[x+1]&&freq[x+2]){
                freq[x]--;
                freq[x+1]--;
                freq[x+2]--;
                end[x+2]++;
                continue;
            }
            return false;
        }
        return true;

    }
};