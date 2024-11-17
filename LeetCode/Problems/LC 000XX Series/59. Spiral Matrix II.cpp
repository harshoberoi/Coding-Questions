class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int count = 1;
        vector<vector<int>>ans(n,vector<int>(n));
        int top_row = 0, right_col = n-1 , bottom_row = n-1 , left_col = 0 ;
while(top_row <= bottom_row && left_col <= right_col)
{
      for(int col = left_col; col <= right_col ; col++ )
      {
        ans[top_row][col] = count;
        count++;
      }

        top_row++;
        

        for(int row = top_row; row <= bottom_row; row++)
        {
         ans[row][right_col] = count;
         count++;
        }
         right_col--;
        
        for(int col = right_col; col >= left_col; col--)
        {
            ans[bottom_row][col] = count;
            count++;
        }
            bottom_row--;

        for(int row = bottom_row; row >= top_row; row--)
        {
            ans[row][left_col] = count;
            count++;
        }
            left_col++;
        
      }
      return ans;  
    }
};
