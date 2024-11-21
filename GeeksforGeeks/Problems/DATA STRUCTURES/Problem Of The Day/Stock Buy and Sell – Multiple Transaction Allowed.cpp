
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        
        
        int maxProfit = 0;
        int n = prices.size();
        for(int i = 0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
            maxProfit += (prices[i+1] - prices[i]); 
        }
        return maxProfit;
    }
};
