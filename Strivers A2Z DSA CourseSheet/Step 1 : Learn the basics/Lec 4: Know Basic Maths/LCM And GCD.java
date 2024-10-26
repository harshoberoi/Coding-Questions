class Solution {
    static Long[] lcmAndGcd(Long A, Long B) {
        Long gcd = 1L;
        
        // Handle cases where either A or B is zero
        if (A == 0 && B == 0) {
            return new Long[]{0L, 0L}; // GCD and LCM are undefined
        } else if (A == 0) {
            return new Long[]{0L, B}; // LCM is 0, GCD is B
        } else if (B == 0) {
            return new Long[]{0L, A}; // LCM is 0, GCD is A
        }

        // Calculate GCD using the Euclidean algorithm
        Long a = Math.abs(A);
        Long b = Math.abs(B);
        while (b != 0) {
            Long temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a; // GCD is now calculated

        // Calculate LCM using the relationship between GCD and LCM
        Long lcm = (A * B) / gcd;

        // Return the result as an array of Long
        return new Long[]{lcm, gcd};
    }
}
