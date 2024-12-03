class Solution {
        public String addBinary(String a, String b){
    //     int temp1 = a_length;
    //     int temp2 = b_length;
    //     double decimal_a = 0;
    //     double decimal_b = 0;
    //     for (int i = 0; i <= a_length; i++){
    //         if(a.charAt(temp1) == '1'){
    //             decimal_a += Math.pow(2, i);
    //             temp1--;
    //         }else{
    //             decimal_a += 0;
    //             temp1--;
    //         }
    //     }
    //     for (int i = 0; i <= b_length; i++){
    //         if(b.charAt(temp2) == '1'){
    //             decimal_b += Math.pow(2, i);
    //             temp2--;
    //         }else{
    //             decimal_b += 0;
    //             temp2--;
    //         }
    //     }
    //     double total = decimal_a + decimal_b;
    //     return total;
    // }
    // public static String addBinary(String a, String b) {
    //     int a_length = a.length() - 1;
    //     int b_length = b.length() - 1;
    //     double total = decimal(a, b, a_length, b_length);
    //     String decimal = "";
    //     String temp1 = "";
    
    //     while(true){
    //         temp1 = Integer.toString((int)(total % 2));
    //         total = Math.floor(total / 2);
    //         decimal = temp1 + decimal;
    //         if (total == 0){
    //             break;
    //         }
    //     }
    //     return decimal;
        int a_length = a.length() - 1;
        int b_length = b.length() - 1;
        StringBuilder result = new StringBuilder();
        int carry = 0;

        // Traverse both strings from the end
        while (a_length >= 0 || b_length >= 0 || carry > 0) {
            int sum = carry; // Start with the carry value

            if (a_length >= 0) {
                sum += a.charAt(a_length) - '0'; // Convert char to int
                a_length--;
            }

            if (b_length >= 0) {
                sum += b.charAt(b_length) - '0'; // Convert char to int
                b_length--;
            }

            result.append(sum % 2); // Append the current bit
            carry = sum / 2; // Update the carry
        }

        // Reverse the result to get the correct order
        return result.reverse().toString();
    
    }
}