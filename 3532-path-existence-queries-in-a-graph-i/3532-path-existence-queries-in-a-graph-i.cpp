class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> Group(n,0);
        int currentGrp=0;

        for (int i=1; i<n; i++){
            if(nums[i]-nums[i-1]>maxDiff) currentGrp++;

            Group[i]= currentGrp;

        }
        vector<bool>op;
        for (auto &it: queries){
            op.push_back(Group[it[0]]==Group[it[1]]);
        }
        return op;
    }
};