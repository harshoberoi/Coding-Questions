class Solution {
public:
    int fib(int n) {

      
        if (n == 0) return 0;  // Base case for fib(0)
        if (n == 1) return 1;  // Base case for fib(1)
        
        int a = fib(n - 2);  // Recursive call for (n-2)
        int b = fib(n - 1);  // Recursive call for (n-1)
        return a + b;        // Return the sum of the two previous Fibonacci numbers
    

        
    }
};
