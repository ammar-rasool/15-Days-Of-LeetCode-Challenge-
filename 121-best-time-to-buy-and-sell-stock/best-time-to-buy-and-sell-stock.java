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
        
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // Update the minimum price
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // Update the maximum profit
            }
        }

        return maxProfit;
    }
    
}