class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;
        int maxi=0;
        //int maxi=0;
        for(int i=0;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            int profit=prices[i]-mini;
            if(profit>maxi){
                maxi=profit;
            }
        }
        return maxi;
    }
};