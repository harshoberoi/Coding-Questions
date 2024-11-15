class Solution {
public:
    bool judgeSquareSum(int c) {
        // for(long i = 0;i<=c;i++)
        // { 
        //     for(long j = 0;j<=c;j++)
        //     {
        //     if((i*i)+(j*j) == c)
        //     return true;
        //     }
        // }
        // return false;


       long long  s = 0;
       long long   e = sqrt(c);

        while(s<=e)
        {
            long long sum = (s*s)+(e*e);
            if(sum == c)
            return true;

            else if(sum < c)
                s++;
            
            else
            e--;
        }
        return false;
    }
};
