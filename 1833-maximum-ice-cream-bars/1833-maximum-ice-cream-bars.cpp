class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int sum=0, cnt=0;
        for(int x:costs){
            sum+= x;
            if (sum<=coins){
                cnt++;
            }
            else break;
        }
        return cnt;
        
    }
};