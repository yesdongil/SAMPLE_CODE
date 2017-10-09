class Solution {
public:
    int titleToNumber(string s) {
        int ret = 0, dec = 1;
        for(int i = s.size() - 1; i >= 0; i--) {
            ret += (s[i] - 'A' + 1)*dec;
            dec *= 26;
        }
        return ret;
    }
};