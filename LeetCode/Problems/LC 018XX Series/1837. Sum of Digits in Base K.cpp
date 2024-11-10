class Solution {
    public int sumBase(int n, int k) {
        int ans = 0;
        while( n!=0 )
        {
            int lastdigit = n % k;
            n /= k;
            ans +=  lastdigit; 
            
        }
        return ans;
    }
}
