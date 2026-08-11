class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int sell = prices[0];
        int buy  = prices[0];
        for (int i = 1; i < prices.size(); ++i)
        {
            int pro = prices[i] - buy;
            if (pro > profit)
            {
                profit = pro;
                sell = prices[i];
            }
            else
            {
                if (prices[i] < buy)
                    buy = prices[i];
            }
        }
        return profit;
    }
};
