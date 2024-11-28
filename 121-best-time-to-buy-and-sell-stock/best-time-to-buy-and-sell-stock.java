import java.util.ArrayList;
class Solution {
    public int maxProfit(int[] prices) {
        // int highest1 = -1;
        // ArrayList<Integer> profit = new ArrayList<Integer>();
        // for (int i = 0; i < prices.length; i++){
        //     for (int j = i; j < prices.length; j++){
        //         if (prices[i] < prices[j]){
        //             profit.add(prices[j] - prices[i]);
        //         }
        //     }
        // }

        // for (int i = 0; i < profit.size(); i++){
        //         if (highest1 < profit.get(i)){
        //             highest1 = profit.get(i);
        //             // highest_index1 = i;
        //         }
        // }
        // if (profit.size() == 0){
        //     return 0;
        // }else{
        //     return highest1;
        // }

        //Second Try 
        int min_price = Integer.MAX_VALUE;
        int max_profit = 0;

        for (int price : prices) {
            if (price < min_price) {
                min_price = price; // Update the minimum price
            } else if (price - min_price > max_profit) {
                max_profit = price - min_price; // Update the maximum profit
            }
        }

        return max_profit;
    }
    
}