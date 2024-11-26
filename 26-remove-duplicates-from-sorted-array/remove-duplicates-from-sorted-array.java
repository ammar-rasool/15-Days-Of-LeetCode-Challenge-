class Solution {
   
    public static int removeDuplicates(int[] nums) {
        int k = 0;
        if (nums.length == 0){
            return k;
        }else{
            for (int i = 0; i < nums.length; i++){
        		boolean isDuplicate = false;
                for (int j = i + 1; j < nums.length; j++){
                    if (nums[i] == nums[j]){
                        isDuplicate = true;
                        break;
                    }
                    else if (i == nums.length - 1) {
                    	break;
                    }
                }
                if (!isDuplicate){
                	nums[k] = nums[i];
                	k++;
                }
            }
            return k;
        }  
        
    }
}