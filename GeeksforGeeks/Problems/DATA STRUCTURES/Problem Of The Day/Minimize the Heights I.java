

// User function Template for Java
class Solution {
    public int getMinDiff(int k, int[] arr) {
        // code here
        
         int n = arr.length;
        
        if(n==1)
        return 0;
        
        Arrays.sort(arr);
       int diff = arr[n-1]-arr[0];
       int max,min;
        
       for(int i = 1;i<n;i++)
       {
           
           
           max = Math.max(arr[i-1]+k,arr[n-1]-k);
           min = Math.min(arr[i]-k, arr[0]+k);
           
           diff = Math.min(diff, max-min);
       }
       return diff;
    }
}
