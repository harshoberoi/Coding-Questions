class Solution {
    public int returnToBoundaryCount(int[] nums) {
        int count = 0;
       // Arrays.sort(nums);
       int left=0,right=0;
       for(int i =0;i<nums.length;i++)
       {
        if(nums[i]<0)
        left+=nums[i];
        else
        right+=nums[i];

        if(right+left==0)
        count++;
       }
       
       return count;
    
    }
}
