class Solution {
public:
    int smallestNumber(int n, int t) {
        int x= n;
        while(true){
            
            int product=1;
            while(x>0){
                product= product* (x%10);
                x/=10;
            }
            if(product%t==0) return n;
            n++;
            x=n;
        }
        return 1;
        
    }
};