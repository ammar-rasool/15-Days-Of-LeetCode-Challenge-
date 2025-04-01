class Solution {
public:
    string clearDigits(string s) {
        if(s == "" || (s.length() == 1 && isalpha(s[0]))){
            return s;
        }else{
            // stack<char>ch;
            int size = s.length();
            // for(int i = 0; i < size; i++){
            //     if(isdigit(s[i])){
            //         s = s.erase(i-1, i);
            //         size = s.length();
            //         i = 0;
            //     }
            // }
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