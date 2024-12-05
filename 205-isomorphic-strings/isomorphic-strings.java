class Solution {
    public boolean isIsomorphic(String s, String t) {
        s = s.trim();
        t = t.trim();
        char[] map_s = s.toCharArray();
        char[] map_t = t.toCharArray();
        boolean same1 = true;
        boolean same2 = true;
        for (int i = 0, k = i + 1; i < map_s.length; i++, k++){
            if (k < map_s.length){
                if (map_s[i] == map_s[k]){
                    if (map_t[i] == map_t[k]){
                        same1 = true;
                    }else{
                        same1 = false;
                        break;
                    }
                }
                i--;
            }else{
                k = i + 1;
            }
        }

        for (int i = 0, k = i + 1; i < map_t.length; i++, k++){
            if (k < map_t.length){
                if (map_t[i] == map_t[k]){
                    if (map_s[i] == map_s[k]){
                        same2 = true;
                    }else{
                        same2 = false;
                        break;
                    }
                }
                i--;
            }else{
                k = i + 1;
            }
        }
        // if (s.length() == t.length()){
        //     for (int i = 0; i < s.length(); i++){
        //         if (i + 1 < s.length() && s.charAt(i) == s.charAt(i+1)){
        //             if (t.charAt(i) == t.charAt(i + 1)){
        //                 same = true;
        //             }else{
        //                 same = false;
        //             }
        //         }
        //     }
            
        // }
        if (same1 && same2)
        return true;
        else
        return false;
        
        
    }
}