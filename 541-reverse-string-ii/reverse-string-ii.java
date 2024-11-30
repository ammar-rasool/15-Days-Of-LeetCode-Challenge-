class Solution {
    public String reverseStr(String s, int k) {
        int temp = k;
        if (s.length() < k){
            return new StringBuilder(s).reverse().toString();
        }else{
            StringBuilder sb = new StringBuilder(s);
            for (int i = 0; i < sb.length(); i += 2 *k){
                int end = Math.min(i + k, sb.length());
                String firstK = sb.substring(i, end);
                String reverse = new StringBuilder(firstK).reverse().toString();
                sb.replace(i, end, reverse);            
            }
            s = sb.toString();
            return s;  
        }
    }
}