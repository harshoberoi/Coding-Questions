class Solution {
    public void moveZeroes(int[] nums) {
        ArrayList <Integer> ans = new ArrayList <>(nums.length);
        Collections.fill(ans,0 ); // Initialize all element of ans Zeroes;
       int count = 0;
        for(int i = 0;i<nums.length;i++)
        {
            if(nums[i] != 0)
            {
            ans.add(nums[i]);
            count++;
            }
        }

        for(int i = 0;i<count;i++)
        {
           nums[i] = ans.get(i); 
        }
        for(int i = count ;i<nums.length;i++)
        {
            nums[i] = 0;
        }

        
    }
}
