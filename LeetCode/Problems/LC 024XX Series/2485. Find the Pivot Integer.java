class Solution {
    public int pivotInteger(int n) {
        int x = 0;
        int sum1=0;
        int sum2=0;
        for(int i = 1;i<=n;i++)
        {
            x=i;
            for(int j=1;j<=x;j++)
            {
            sum1+=j;
            }
             for(int k=x;k<=n;k++)
            {
            sum2+=k;
            }

            if(sum1==sum2)
            return x;
            else
            {
                sum1=0;
                sum2=0;
            }

        }
        return -1;
    }
}
