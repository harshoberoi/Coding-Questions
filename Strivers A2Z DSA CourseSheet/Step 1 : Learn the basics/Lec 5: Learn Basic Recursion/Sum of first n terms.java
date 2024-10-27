class Solution {
     long sum = 0;
    long sumOfSeries(long n) {
        // code here
        
       
          sum+=(n*n*n);
        if(n<1)
        return 0;
        
      
        sumOfSeries(n-1);
        return sum;
        
    }
}
