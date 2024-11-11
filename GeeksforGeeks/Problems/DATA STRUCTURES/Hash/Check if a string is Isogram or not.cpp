

class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        //unordered_map<int,char> mpp;
        
        int hash[26] = {0};
        for(int i = 0;i<s.length();i++)
        {
            hash[s[i] - 'a']++;
        }
        
        for(int i = 0;i<26;i++)
        {
            if(hash[i]>1)
            return 0;
        }
        return 1;
    }
};
