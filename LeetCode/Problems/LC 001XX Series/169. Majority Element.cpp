class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        int element = 0;
        for(int i = 0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        
        // for(const auto &x : mpp)
        // {
        // if(x.second >= (n/2))
        // {
          
        //     element = x.first;
        // }
        // }

         int maxKey = -1;
    int maxFreq = INT_MIN;

   
    for (auto it = mpp.begin(); it != mpp.end(); it++) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
            maxKey = it->first;
        }
    }
        return maxKey;

    }
};
