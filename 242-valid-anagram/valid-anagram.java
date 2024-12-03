import java.util.Arrays;
class Solution {
    public boolean isAnagram(String s, String t) {
           s = s.replace(" ", "");
            t = t.replace(" ", "");
        char[] ch1 = s.toCharArray();
        char[] ch2 = t.toCharArray();
        Arrays.sort(ch1);
        Arrays.sort(ch2);
        s = new String(ch1);
        t = new String(ch2);
        if (s.equals(t)){
            return true;
        }else{
            return false;
        }
    }
}