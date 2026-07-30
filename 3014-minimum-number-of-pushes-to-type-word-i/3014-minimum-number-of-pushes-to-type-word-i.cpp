class Solution {
public:
    int minimumPushes(string word) {
        int n= word.size();
        int m= 1+ (n-1)/8;

        return m*(m-1)*4 + (n-(m-1)*8)*m;
    }
};