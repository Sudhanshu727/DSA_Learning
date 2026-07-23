class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,
                                             vector<vector<int>>& secondList) {
        int l = 0;
        int r = 0;
        vector<vector<int>> ans;
        vector<int> interval(2);
        while (l < firstList.size() && r < secondList.size()) {
            if (firstList[l][0] <= secondList[r][1] &&
                secondList[r][0] <= firstList[l][1]) {
                interval[0] = max(firstList[l][0], secondList[r][0]);
                interval[1] = min(firstList[l][1], secondList[r][1]);

                ans.push_back(interval);
                if(interval[1]== secondList[r][1]) r++;
                else if (interval[1]== firstList[l][1]) l++;
            }
            else if(firstList[l][0]>secondList[r][1]) r++;
            else if(secondList[r][0]>firstList[l][1]) l++;
        }
        return ans;

    }
};