class Solution {
public:
    int longestPalindrome(string s) {
        int ret = 0;
        unsigned long long table = 0;
        for(int i = 0; i < s.size(); i++) {
            unsigned long long v = 1ULL << (s[i] - 'A');
            if( (v & table) != 0ULL) {
                table &= ~(v);
                ret += 2;
            } else {
                table |= v;
            }
        }
        if(table != 0) {
            ret++;
        }
        return ret;
    }
};