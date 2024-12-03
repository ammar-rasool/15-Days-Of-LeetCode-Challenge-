import java.util.Arrays;
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0){
                return "";   
        }
        Arrays.sort(strs);
        String largest = strs[strs.length - 1];
        String smallest = strs[0];
        // String gcp = "";
        // for (int i = 0; i < largest.length(); i++){
        //     else if(smallest.length()==largest.length()){
        //         if (smallest.equals(largest)){
        //             return smallest;
        //         }
        //         else if(smallest.charAt(i) != largest.charAt(i)){
        //             gcp = largest.substring(0, i);
        //             break;
        //         }
        //     }else if(strs.length == 1 || smallest.length() == 1 || smallest.length() == 0){
        //         return smallest;
        //     }else if(smallest.equals(largest)){
        //         return smallest;
        //     }else if(smallest.charAt(i) != largest.charAt(i)){
        //         gcp = largest.substring(0, i);
        //         break;
        //     }
        // }
        // return gcp;
        int minLength = Math.min(smallest.length(), largest.length()); // Limit to the shortest string's length

        for (int i = 0; i < minLength; i++) {
            if (smallest.charAt(i) != largest.charAt(i)) {
                return smallest.substring(0, i); // Return the prefix up to the mismatch
            }
        }

        return smallest;
    }
}