class Solution {
    public int findMaxK(int[] nums) {
        Arrays.sort(nums);

        int s = 0;
        int e = nums.length-1;

        while(s<e)
        {
            if(nums[s] == ((-1)*nums[e]))
            return nums[e];

            else if((-1)*nums[s] < nums[e])
                e--;
            else
            s++;
        }
         return -1;

        }
       
}
