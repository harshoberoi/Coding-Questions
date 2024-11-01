class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sumOfnums = 0;
        int missing = 0;
        int sum = (n*(n+1))/2;
        // for(int i = 0;i<nums.length;i++)
        // {
        //    sumOfnums+=nums[i];
        // }


        // Another way to calculate actual sum
        sumOfnums = Arrays.stream(nums).sum();

        missing = sum-sumOfnums;
        return missing;


    }
}
