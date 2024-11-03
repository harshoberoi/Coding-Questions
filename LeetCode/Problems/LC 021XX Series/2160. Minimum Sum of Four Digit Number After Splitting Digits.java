class Solution {
    public int minimumSum(int num) {
      ArrayList <Integer> digits = new ArrayList<>();
      int n = num;
      while(n!=0)
      {
         int rem = n%10;
         n/=10;
         digits.add(rem);
      }
      Collections.sort(digits);
      int new1 = digits.get(0)*10+digits.get(2);
      int new2 = digits.get(1)*10+digits.get(3);

      return new1+new2;  
    }
}
