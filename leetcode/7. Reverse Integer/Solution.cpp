class Solution {
public:
    int reverse(int x) {
        int max_product_lim = numeric_limits<int>::max()/10;
        int min_product_lim = numeric_limits<int>::min()/10;
        int max_lim = numeric_limits<int>::max();
        int min_lim = numeric_limits<int>::min();
        int ret = 0;
    
        while(x != 0) {
            if((ret > max_product_lim) || (ret < min_product_lim)) {
                x = 0;
                ret = 0;
            } else {
                ret *= 10;
            }
            int temp = x % 10;
            if((ret > max_lim - abs(temp)) || (ret < min_lim + abs(temp))) {
                x = 0;
                ret = 0;
            } else {
                ret += temp;
            }
            x /= 10;
        }
        return ret;
    }
};