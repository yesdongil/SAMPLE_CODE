class Solution {
public:
    inline char add_bit(char A, char B, char &c) {
        char ret = (A | B);
        if( A == 1 && B == 1) {
            c = 1;
            ret = 0;
        } else {
            c = 0;
        }
        return ret;
    }
    
    string addBinary(string a, string b) {
        string ret;
        int aLen = a.size() - 1;
        int bLen = b.size() - 1;
        char carry = 0;
        while(aLen >= 0 || bLen >= 0) {
            char aCh = 0;
            char bCh = 0;
            if(aLen >= 0) {
                aCh = a[aLen] - '0';
            }
            if(bLen >= 0) {
                bCh = b[bLen] - '0';
            }
            char result = add_bit(aCh, carry, carry);
            if(carry == 1) {
                result |= bCh;
            } else {
                result = add_bit(bCh, result, carry);
            }
            ret += result + '0';
            aLen--;
            bLen--;
        }
        if(carry == 1) {
            ret += '1';
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};