import java.util.Scanner;
public class Solution {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a string to check if it is Palindrome or not: ");
        String s = input.nextLine();
        boolean isPalindrome = isPalindrome(s);
        if (isPalindrome){
            System.out.println("The provided string is a palindrome.");
        }else{
            System.out.println("The provided string is not a palindrome.");
        }
    }
    public static boolean isPalindrome(String s) {
        s = s.toUpperCase();
        int count1 = 32;
        char[] sp_ch1 = new char[16];
        for (int i = 0; i < sp_ch1.length; i++){
           sp_ch1[i] += count1;
           count1++;
        }
        int count2 = 91;
        char[] sp_ch2 = new char[6];
        for (int j = 0; j < sp_ch2.length; j++){
           sp_ch2[j] += count2;
           count2++;
        }
        int count3 = 123;
        char[] sp_ch3 = new char[4];
        for (int k = 0; k < sp_ch3.length; k++){
           sp_ch3[k] += count3;
           count3++;
        }
        int count4 = 58;
        char[] sp_ch4 = new char[7];
        for (int l = 0; l < sp_ch4.length; l++){
           sp_ch4[l] += count4;
           count4++;
        }
        String original = "";
        for (int i = 0; i < s.length(); i++){
            char character = s.charAt(i);
            boolean isSpecial = false;
            for (char sp : sp_ch1){
                if (character == sp){
                    isSpecial = true;
                    break;
                }
            }

            for (char sp : sp_ch2){
                if (character == sp){
                	isSpecial = true;
                    break;
                }
            }

            for (char sp : sp_ch3){
               if (character == sp){
                    isSpecial = true;
                    break; 
            	}
        	}

            for (char sp : sp_ch4){
               if (character == sp){
                    isSpecial = true;
                    break;
                } 
            }

            if (!isSpecial){
            	original += character;
            }
        }
        return isPalindrome(original, original.length() - 1, 0);
    }
    public static boolean isPalindrome(String s, int high, int low) {
        if (high == low || high < low || s.length() == 0){
            return true;
        }else if(s.charAt(high) != s.charAt(low)){
            return false;
        }else{
            return isPalindrome(s, high-1, low+1);
        }
    }
}