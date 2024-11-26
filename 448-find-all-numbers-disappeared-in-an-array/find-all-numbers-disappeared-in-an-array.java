class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        // int n = nums.length;
        // int[] n_array = new int[n];
        // for (int i = 0; i < n_array.length; i++){
        //     n_array[i] = i + 1;
        // }
        // List<Integer> missing_element = new ArrayList<>();
        // for (int i = 0; i < n_array.length; i++){
        //     boolean isPresent = false;
        //     for (int j = 0; j < nums.length; j++){
        //         if (n_array[i] == nums[j]){
        //             isPresent = true;
        //             break;
        //         }
        //     }
        //     if (!isPresent){
        //        missing_element.add(n_array[i]);
        //     }
        // }
        // return missing_element;
         List<Integer> missing_elements = new ArrayList<>();

        
        for (int i = 0; i < nums.length; i++) {
            int index = Math.abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > 0) {
                missing_elements.add(i + 1);
            }
        }

        return missing_elements;      

    }
}