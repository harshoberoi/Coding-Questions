class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        
        vector<int>ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        
    //   int i = 0;
    //   while(i<n)
    //   {
    //       count = 0;
          
    //       for(int j = i; j<n ; j++)
    //       {
    //           if( arr[i] == arr[j])
    //           count++;
    //           else
    //           break;
    //       }
      
    //         if(count>=n/3)
    //           {
    //               ans.push_back(arr[i]);
    //               i += count ; 
                 
    //           }
             
    //     }
    //     if(ans.empty())
    //     return {};
    //     return ans;
        
       // 1 2 5 5 5 5 6 6 6 6 6
       
       int count = 1;
       for( int i = 0; i< n-1;i++)
       {
           if(arr[i] == arr[i+1])
           {
               count++;
           }
           else if(count > n/3)
          { 
               ans.push_back(arr[i]);
               count=1;
               
          }
          
          else{
              count = 1;
          }
          
       }
       
       if(arr[n-1] == arr[n-2])
       count++;
       else
       count = 1;
       
       if(count > n/3)
       ans.push_back(arr[n-1]);
       
       
       
    //   if(ans.empty())
    //   return {};
       return ans;
       
       
       
       
        
        
    }
};
