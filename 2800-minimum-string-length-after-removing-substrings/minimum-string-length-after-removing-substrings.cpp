class Solution {
public:
    int minLength(string s) {
        stack<char>ch;
        if(s == "" || s.length() == 1){
            return s.length();
        }else{
            for(int i = 0; i < s.length(); i++){
                if(s[i] != 'B' && s[i] != 'D'){
                    ch.push(s[i]);
                }else if(!ch.empty()){
                    switch (s[i]){
                        case 'B':
                            if(ch.top() == 'A'){
                                ch.pop();
                            }else{
                                ch.push(s[i]);
                            }
                            break;
                        case 'D':
                            if(ch.top() == 'C'){
                                ch.pop();
                            }else{
                                ch.push(s[i]);
                            }
                            break;
                    }
                }else{
                    ch.push(s[i]);
                }
            }
            return ch.size();
        }
       
    }
};