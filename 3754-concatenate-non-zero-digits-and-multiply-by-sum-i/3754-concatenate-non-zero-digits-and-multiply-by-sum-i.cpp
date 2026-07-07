class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0;
        long long x=0;
        while(n>0){
            if(n%10==0){
                n=n/10;
            }
            else{
                sum = sum+ n%10;
                x= x*10 + n%10;
                n/=10;
            }
        }
        long long revx=0;
        while (x>0){
            revx= x%10 + revx*10;
            x/=10;
        }
        return (revx*sum);
    }
};