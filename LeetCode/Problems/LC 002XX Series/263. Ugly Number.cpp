class Solution {
public:
    bool isUgly(int n) {
        // if(n<=0)
        // return false;

        // while(n%2==0)
        // {
        //     n /= 2;
        // }

        
        // while(n%3==0)
        // {
        //     n /= 3;
        // }

        // while(n%5==0)
        // {
        //     n /= 5;
        // }

        //  if(n==1)
        // return true;
        // return false;

      
        for (int i = 2; i < 6 && n; i++)
        while (n % i == 0)
        n /= i;
        return n == 1;

    }
};
