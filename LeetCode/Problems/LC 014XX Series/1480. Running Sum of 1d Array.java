class Solution {
    public int[] runningSum(int[] nums) {
        
        int [] runningsum =new int[nums.length];
        runningsum[0] = nums[0];
        for(int i =1;i<nums.length;i++){
             runningsum[i]=nums[i]+runningsum[i-1];
        }
        return runningsum;
    }
}
