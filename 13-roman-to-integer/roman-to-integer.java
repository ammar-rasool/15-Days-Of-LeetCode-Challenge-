class Solution {
    public int romanToInt(String s) {
       char[] chr = s.toCharArray();
       int total = 0;
       for(int i = 0; i < chr.length; i++){
            if (i + 1 < chr.length && chr[i] == 'I' && chr[i+1] == 'V'){
                total += 4;
                i ++;
            }else if(i + 1 < chr.length && chr[i] == 'I' && chr[i + 1] == 'X'){
                total += 9;
                i++;
            }else if(i + 1 < chr.length && chr[i] == 'X' && chr[i + 1] == 'L'){
                total += 40;
                i++;
            }else if(i + 1 < chr.length && chr[i] == 'X' && chr[i + 1] == 'C'){
                total += 90;
                i++;
            }else if(i + 1 < chr.length && chr[i] == 'C' && chr[i + 1] == 'D'){
                total += 400;
                i++;
            }else if(i + 1 < chr.length && chr[i] == 'C' && chr[i + 1] == 'M'){
                total += 900;
                i++;
            }else{
                switch (chr[i]){
                case 'I':
                    total += 1;
                    break;
                case 'V':
                    total += 5;
                    break;
                case 'X':
                    total += 10;
                    break;
                case 'L':
                    total += 50;
                    break;
                case 'C':
                    total += 100;
                    break;
                case 'D':
                    total += 500;
                    break;
                case 'M':
                    total += 1000;
                    break;
                }
            }
       }
       return total;
    }

}
