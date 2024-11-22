class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        double count = 0;
        int n = salary.size();
        sort(salary.begin(),salary.end());
        for(int i = 1;i<n-1;i++)
        {
            if(salary[i] != salary[0] && salary[i] != salary[n-1])
           {
             sum += salary[i];
            count++;
           }
        }
        return sum/count;
    }
};
