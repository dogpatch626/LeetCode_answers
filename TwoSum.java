class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i, x;
        for (i = 0; i < nums.length; i++) {
            for (x = i + 1; x < nums.length; x++) {
                if (nums[i] + nums[x] == target)
                    return new int[] { i, x };
            }
        }

        throw new IllegalArgumentException("No two sum solution");
    }

}