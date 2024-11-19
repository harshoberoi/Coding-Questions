// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        
        //  bool check = false;
        // for(int i = arr.size()-1;i>0;i--)
        // {
        //     if(arr[i]<arr[i-1])
        //     check = true;
        //     else
        //     break ;
        // }
        
        // if(check == true)
        // {
        // reverse(arr.begin(),arr.end());
        // return ;
        // }
        
        // else
        // {
        //     int index = -1;
        //     for(int i = arr.size()-2;i>0;i--)
        //     {
        //         if(arr[i]<arr[i+1])
        //         { 
        //             //pivot
        //          index = arr[i];
        //         break;
        //         }
                
        //     }
            
        //     for(int i = index+1;i<arr.size()-2;i++)
        //     {
        //         if(arr[i]<arr[i+1])
        //     }
        
        
        next_permutation(arr.begin(),arr.end());
        
        
    }
};
