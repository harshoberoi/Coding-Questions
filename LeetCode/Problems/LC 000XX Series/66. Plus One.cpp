class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //  the below apprach works for max cases but will stuck for big num
        // 61 cases pass
    // long long result = 0;
    // for (int i = 0; i < digits.size(); i++) {
    //     result = result*10 + digits[i];
    // }
    // long long update = result +1;
    // vector<int> ans;
    // while (update > 0) {
    //     ans.push_back(update % 10);
    //     update /= 10;
    // }
    // reverse(ans.begin(), ans.end());

    // return ans;

    // better approach
    // vector.insert(position, value); property of vector
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;  // Just increment the current digit
                return digits;
            }
            digits[i] = 0;  // Carry over if the digit is 9
        }
        // If all digits were 9, we need an extra digit at the start
        digits.insert(digits.begin(), 1);
        
        return digits; 
    }
};
