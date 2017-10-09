class Solution {
public:
    int climbStairs(int n) {
        int ret = 1, old = 1, old1 = 0;
        for(int i = 0; i < n; i++) {
            ret += old1;
            old1 = old;
            old = ret;
        }
        return ret;
    }
};