class Solution {
public:
    int findComplement(int num) {
        int clz = __builtin_clz(num);
        int temp = -1;
        temp >>= (32 - clz);
        temp <<= (32 - clz);
        return ((~temp) ^ num);
    }
};