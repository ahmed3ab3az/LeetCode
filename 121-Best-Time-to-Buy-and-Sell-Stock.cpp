class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int mn = prices[i];
        int profit = 0;
        for(int j = 1 ; j < prices.size() ; j++){
               if(mn > prices[j]){
                    mn = prices[j];
               } else if(prices[j] - mn > profit){
                    profit = prices[j] - mn;
               }
        }
        return profit;
        

    }
};