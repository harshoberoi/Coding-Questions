

class Solution {
    void helper(int i,int arr[],int n)
    {
        if(i >= n/2)
        return;
        
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        
        helper(i+1,arr,n);
    }
    public void reverseArray(int arr[]) {
        // code here
        
        helper(0,arr,arr.length);
    }
}
