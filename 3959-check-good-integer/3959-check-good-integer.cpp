class Solution {
public:
    bool checkGoodInteger(int n) {
        
        int num=n;
        int sq=0;
        int sum=0;

        while(num!=0){
            int dig=num%10;

            sum+=dig;
            sq+=dig*dig;

            num=num/10;
        }

        return sq-sum >= 50;
        
    }
};