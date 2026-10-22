class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        long long ans=numBottles;
        while(numBottles>=numExchange){
            int div=numBottles/numExchange;
            int rem=numBottles%numExchange;
            ans+=div;
            numBottles=div+rem;
        }
        return ans;
    }
};