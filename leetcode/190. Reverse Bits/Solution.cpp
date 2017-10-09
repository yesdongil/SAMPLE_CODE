class Solution {
public:
    uint32_t reverse16(uint32_t n, int clz)
    {
        static const uint32_t table_rev[16] = {
            0x0, 0x8, 0x4, 0xC,
            0x2, 0xA, 0x6, 0xE,
            0x1, 0x9, 0x5, 0xD,
            0x3, 0xB, 0x7, 0xF
        };
        uint32_t ret = 0;
        while (n > 0) {
            ret <<= 4;
            ret += table_rev[ n % 16 ];
            n >>= 4;
        }
        return (ret << clz);
    }
    
    uint32_t reverseBits(uint32_t n) {
        int clz_n = __builtin_clz(n);
        int rem = clz_n % 4;
        int ret = n << rem;
        ret = reverse16(ret, (clz_n - rem));
        ret <<= rem;
        return ret;
    }
};