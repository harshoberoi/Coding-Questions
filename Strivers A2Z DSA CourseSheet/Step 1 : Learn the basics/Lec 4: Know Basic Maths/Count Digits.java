class Solution{
    static int evenlyDivides(int N){
       
        // code here
            int count = 0;
        int n = N;
        while (n!= 0){
            int rem = n%10;
            if (rem != 0 && N%rem == 0  ){
                count += 1;
            }
            n = n/10;
        }
        return count;
        
    }
}
