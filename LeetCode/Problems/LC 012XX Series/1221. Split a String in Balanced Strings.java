class Solution {
    public int balancedStringSplit(String s) {
   int R = 0, L = 0, max = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'R') {
                R++;
            } else {
                L++;
            }
            if (R == L) {
                max++;
                R = 0;
                L = 0;
            }
        }
        
        return max;
        
    }
}
