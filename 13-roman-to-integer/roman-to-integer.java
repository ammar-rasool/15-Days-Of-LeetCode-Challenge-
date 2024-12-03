class Solution {
    public int romanToInt(String s) {
    //    char[] chr = s.toCharArray();
    //    int total = 0;
    //    for(int i = 0; i < chr.length; i++){
    //         if (i + 1 < chr.length && chr[i] == 'I' && chr[i+1] == 'V'){
    //             total += 4;
    //             i ++;
    //         }else if(i + 1 < chr.length && chr[i] == 'I' && chr[i + 1] == 'X'){
    //             total += 9;
    //             i++;
    //         }else if(i + 1 < chr.length && chr[i] == 'X' && chr[i + 1] == 'L'){
    //             total += 40;
    //             i++;
    //         }else if(i + 1 < chr.length && chr[i] == 'X' && chr[i + 1] == 'C'){
    //             total += 90;
    //             i++;
    //         }else if(i + 1 < chr.length && chr[i] == 'C' && chr[i + 1] == 'D'){
    //             total += 400;
    //             i++;
    //         }else if(i + 1 < chr.length && chr[i] == 'C' && chr[i + 1] == 'M'){
    //             total += 900;
    //             i++;
    //         }else{
    //             switch (chr[i]){
    //             case 'I':
    //                 total += 1;
    //                 break;
    //             case 'V':
    //                 total += 5;
    //                 break;
    //             case 'X':
    //                 total += 10;
    //                 break;
    //             case 'L':
    //                 total += 50;
    //                 break;
    //             case 'C':
    //                 total += 100;
    //                 break;
    //             case 'D':
    //                 total += 500;
    //                 break;
    //             case 'M':
    //                 total += 1000;
    //                 break;
    //             }
    //         }
    //    }
    //    return total;
        int num=0;
        // str=str.toUpperCase();
        boolean flag=false;
        int i=s.length()-1;
        while (i>=0){
            boolean found=false;
            char y=s.charAt(i);
            switch (y) {
                case 'I':num=num+1;    
                    break;
                case 'V':
                if (i-1>=0){
                    if(s.charAt(i-1)=='I'){
                        num=num+4;
                        found=true;
                    }else{
                        num=num+5;
                    }
                }else{
                num=num+5;
                }
                    break;
                case 'X':
                if (i-1>=0){
                    if(s.charAt(i-1)=='I'){
                        num=num+9;
                        found=true;
                    }else{
                        num=num+10;
                    }
                }else{   
                num=num+10; 
                }
                    break;
                case 'L':
                if (i-1>=0){
                    if(s.charAt(i-1)=='X'){
                        num=num+40;
                        found=true;
                    }else{
                        num=num+50;
                    }
                }else{
                num=num+50;
                }
                    break;
                case 'C':
                if (i-1>=0){
                    if(s.charAt(i-1)=='X'){
                        num=num+90;
                        found=true;
                    }else{
                        num=num+100;
                    }
                }else{
                num=num+100;  
                }
                    break;
                case 'D':
                if (i-1>=0){
                    if(s.charAt(i-1)=='C'){
                        num=num+400;
                        found=true;
                    }else{
                        num=num+500;
                    }
                }else{ 
                num=num+500;
                }
                    break;
                case 'M':
                if (i-1>=0){
                    if(s.charAt(i-1)=='C'){
                        num=num+900;
                        found=true;
                    }else{
                        num=num+1000;
                    }
                }else{
                num=num+1000;
                }
                    break;
                default:
                    flag=true;
                    break;
            }
            if(found==true){
                i=i-2;
            }else{
                i--;
            }
            if(flag==true){
                System.out.println("INVALID CHARACTER");
                break;
            }
        }
        if(!flag){
            // System.out.println("Integer: "+num);
            return num;
        }
        return num;
    }

}
