

// User function Template for Java
class Solution {

    // arr: input array
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int[] arr) {
           int n = arr.length;
           int max = Integer.MIN_VALUE;
           int prefix = 0;
           for(int i = 0;i<n;i++)
           {
               prefix += arr[i];
               max = Math.max(max,prefix);
               if(prefix < 0)
               {
                   prefix = 0;
               }
           }
           return max;
        // Your code here
    }
}
