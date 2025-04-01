class Solution {
public:
    string clearDigits(string s) {
        if(s == "" || (s.length() == 1 && isalpha(s[0]))){
            return s;
        }else{
            int i = 1;
            while(i < s.length()){
                if(isdigit(s[i])){
                    s = s.erase(i-1, 2);
                    i = 1;
                }else{
                    i++;
                } 
            }
            return s;
        }
    }
};