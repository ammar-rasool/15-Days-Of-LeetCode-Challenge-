class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        int index = s.lastIndexOf(" ");
        String s1 = s.substring(index + 1, s.length());
        return s1.length();
    }
}