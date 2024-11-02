class Solution {
    public int[] leftRightDifference(int[] nums) {
        int [] rightsum = new int[nums.length];
        rightsum[0] = 0;
        for(int i = 1;i<nums.length;i++)
        {
            rightsum[i] = rightsum[i-1] + nums[i-1];
        }
        int [] leftsum = new int[nums.length];
        leftsum[nums.length-1] = 0;
        for(int i = nums.length-2;i>=0;i--)
        {
            leftsum[i] = leftsum[i+1] + nums[i+1];
        }
        int [] ans = new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            ans[i] =(leftsum[i] - rightsum[i]);

            
            // if(ans[i]<0)
            // ans[i] = -1*ans[i];


        }
        return  ans;
    }
}
