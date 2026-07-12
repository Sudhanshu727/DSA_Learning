class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        sort(boxTypes.begin(), boxTypes.end(),
             [](vector<int>& a, vector<int>& b) {
                 if (a[1] == b[1]) {
                     return a[0] < b[0];
                 }
                 return a[1] > b[1];
             });
        int nbox = 0;
        int units = 0;
        int i=0;
        while (i < n && nbox < truckSize) {
            nbox += boxTypes[i][0];
            units += boxTypes[i][0] * boxTypes[i][1];
            i++;
            if (nbox == truckSize) return units;
        }
        if (nbox > truckSize) {
            int diff= nbox-truckSize;
            i--;
            units-= diff* boxTypes[i][1];
        }
        return units;
    }
};