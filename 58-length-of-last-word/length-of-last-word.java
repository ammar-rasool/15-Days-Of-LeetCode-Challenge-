class Solution {
    public int lengthOfLastWord(String s) {
        s = s.trim();
        int index = s.lastIndexOf(" ");
        s = s.substring(s.lastIndexOf(" ") + 1, s.length());
        return s.length();
    }
}