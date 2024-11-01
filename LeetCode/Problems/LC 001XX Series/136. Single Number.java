class Solution {
    public int singleNumber(int[] nums) {
        if(nums.length<2)
        return nums[0];

        Arrays.sort(nums);

        for(int i  = 0;i<nums.length;i+=2)
        {
            if( i == nums.length-1)
            return nums[i];

            if(nums[i] != nums[i+1])
            return nums[i];
        }
        return -1;
    }

}
