
class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // Your code here
        unordered_map<char,int>mpp;
        for(int i = 0;i<s.length();i++)
        {
          mpp[s[i]]++;  
        }
        for(int i = 0;i < s.length();i++)
        {
           if(mpp[s[i]]== 1)
           return s[i];
        }
        return '$';
    }
};
