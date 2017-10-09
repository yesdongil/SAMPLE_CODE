class Solution {
public:
    int addDigits(int num) {
        int ret = 0;
        if(num > 0) {
            ret = num % 9;
            if(ret == 0) {
                ret = 9;
            }
        }
        return ret;
    }
};