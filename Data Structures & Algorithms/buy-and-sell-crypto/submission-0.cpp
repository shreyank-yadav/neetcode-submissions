class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int buy=prices[0];
        for(int i=1;i<n;i++){
            int sell=prices[i];
            profit=max(profit,sell-buy);
            buy=min(buy,sell);
        }
        return profit;
    }
};
