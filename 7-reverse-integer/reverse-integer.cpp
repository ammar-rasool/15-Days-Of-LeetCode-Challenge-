#include<bits/stdc++.h>

#include <climits> 
using namespace std;
class Solution {
public:
    int reverse(int x) {
        // if (x >= -9 && x <= 9){
        //     return x;
        // }else if (x < 0){
        //     string num = "";
        //     while (x != 0){
        //         num += to_string(-1 * (x % 10));
        //         x /= 10;
        //     }
        //     return -1 * (stoi(num));
        // }else{
        //     string num = "";
        //     while (x != 0){
        //         num += to_string(x % 10);
        //         x /= 10;
        //     }
        //     return stoi(num);
        // }

        long long num = 0;
        if (x > INT_MAX || x <INT_MIN){
            return 0;
        }else{
            int digit = 0;
            while (x != 0){
                digit = x % 10;
                num  = num * 10 + digit;
                x /= 10;
            }
            if(num > INT_MAX || num <INT_MIN){
                return 0;
            }else{
                return static_cast<int>(num);
            }
            
        }
        
    }
};