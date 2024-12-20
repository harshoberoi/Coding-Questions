class Solution {
    public int search(int[] nums, int target) {

        if(nums.length ==1 && target == nums[0])
         return 0;

       
         int start = 0;
        int end = nums.length-1;

        while(start<=end)
        {
            int mid = (end-start+end)/2;

            if(nums[mid] == target)
            return mid;

            else if(nums[mid] < target)
            {
                start = mid+1;
            }

            else 
            end = mid-1;

        }
        return -1;
    }
}
