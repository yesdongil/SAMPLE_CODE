class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size(), carry = 1;
        for(int i = len - 1; i >= 0; i--) {
            int temp = digits[i] + carry;
            carry = 0;
            if(temp > 9) {
                temp = 0;
                carry = 1;
            }
            digits[i] = temp;
        }
        if(carry == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};