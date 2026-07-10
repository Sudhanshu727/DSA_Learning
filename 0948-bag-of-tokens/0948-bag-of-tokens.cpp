class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n= tokens.size();
        int score=0;
        sort(tokens.begin(), tokens.end());
        int left=0, right=n-1;
        int temp=0;
        
        while(left<=right){
            score=temp;
            if(tokens[left]<=power){
                power-=tokens[left];
                score++;
                temp++;
                left++;

            }
            else if(score>=1){
                power+=tokens[right];
                temp--;
                right--;
            }
            else{
                break;
            }
        }
        return score;

    }
};