class Solution {
public:
    string addStrings(string num1, string num2) {
        string ret;
        int num1_len = num1.size() - 1, num2_len = num2.size() - 1, carry = 0;
        
        while(num1_len >= 0 || num2_len >= 0) {
            char num1ch = 0, num2ch = 0;
            if(num1_len >=0 ) {
                num1ch = num1[num1_len] - '0';
            }
            if(num2_len >=0 ) {
                num2ch = num2[num2_len] - '0';
            }
            char digit = num1ch + num2ch + carry;
            carry = 0;
            if(digit > 9) {
                digit -= 10;
                carry = 1;
            }
            ret += (digit + '0');
            num1_len--;
            num2_len--;
        }
        if(carry == 1) {
            ret += '1';
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};