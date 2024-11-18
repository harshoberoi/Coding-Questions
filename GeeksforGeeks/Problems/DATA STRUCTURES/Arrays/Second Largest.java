

// User function Template for Java

class Solution {
    public int getSecondLargest(int[] arr) {
        // Code Here
        Arrays.sort(arr);
        int last = arr[arr.length-1];
        for(int i = arr.length-2;i>=0;i--)
        {
            if(arr[i] != last)
            return arr[i];
        }
        return -1;
    }
}
