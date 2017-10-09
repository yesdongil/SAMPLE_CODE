class Solution {
public:
    string toHex(int num) {
        string ret;
        unsigned int val = (unsigned int)num;
        do {
            char v = (char)(val & 0xFU);
            if(v < 10) {
                v += '0';
            } else {
                v = v - 10 + 'a';
            }
            ret.insert(ret.begin(), v);
            val >>= 4;
        } while(val != 0);
        return ret;
    }
};