class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)
        return false;
        int temp=x;
        int reverse =0;
       
        while(temp!=0)
        {
          int rem = temp%10;
          temp /=10;
          reverse=reverse*10+rem;
          
        }
        if(reverse==x)
        return true;
        else
        return false;
    }
}
