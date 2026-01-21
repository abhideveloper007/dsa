class Solution {
    public int maxProfit(int[] prices) {
        int buy=prices[0];
        int max_profit=0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]<buy){
                buy=prices[i];

            }
            else{
               int maxi=prices[i]-buy;
                max_profit=Math.max(maxi,max_profit);
            }
        }
        return max_profit;
        
    }
}