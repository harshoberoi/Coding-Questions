class Solution {
    public int splitNum(int num) {
    
      ArrayList <Integer> digits = new ArrayList<>();
      int num1 = 0,num2 =0;
      int n = num;
      while(n!=0)
      {
         int rem = n%10;
         n/=10;
         digits.add(rem);
      }
      Collections.sort(digits);
      
        for (int i = 0; i < digits.size(); i++) {
            if(i%2==0){
                num1 = num1 * 10 + digits.get(i);
            }else{
                num2 = num2 * 10 + digits.get(i);
            }
        }

        return num1 + num2;
   

     
    

    }
}
