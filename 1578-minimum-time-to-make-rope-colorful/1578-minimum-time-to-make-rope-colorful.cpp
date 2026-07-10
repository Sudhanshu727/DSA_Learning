class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n= neededTime.size();
        int prev=0, curr=1, time=0;
        while(curr<n){
            if(colors[prev]==colors[curr]){
                if(neededTime[prev]<neededTime[curr]){
                    time+=neededTime[prev];
                    prev=curr;
                    curr++;
                    
                }
                else{
                    time+=neededTime[curr];
                    curr++;
                }
            }
            else{
                prev=curr;
                curr++;
            }

        }
        return time;
    }
};