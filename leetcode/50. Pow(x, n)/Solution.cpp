class Solution {
public:
    double myPow(double x, int n) {
        double ret = 1.0, p = x;
        long long int r = (long long int)n;
        bool minus = false;
        
        if(r < 0) {
            minus = true;
            r *= -1;
        }
        while(r > 0) {
            if( (r & 1) != 0) {
                ret *= p;
            }
            p *= p;
            r >>= 1;
        }
        if(minus == true) {
            ret = 1.0 / ret;
        }
        return ret;
    }
};