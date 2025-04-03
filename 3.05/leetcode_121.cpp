class Solution {
public:
	int max(int a,int b){
		if (a>b)    return a;
		return b;
	}
	int maxProfit(vector<int>& prices) {
		if(prices.size()<=1)
			return 0;
		int profit = 0;
		for(int buy = 0,sell = 1;sell < prices.size();){
			if(prices[buy] < prices[sell]){
				profit = max(prices[sell]-prices[buy],profit);
				sell++;
			}
			else{
				buy = sell;
				sell++;
			}

		}
		return profit;
	}
};