class Solution {
public:
    string convertToBase7(int num) {
        string ret;
        bool minus_v = false;
        if(num < 0) {
            minus_v = true;
            num *= -1;
        }
        while(num > 6) {
            ret.push_back((num % 7) + '0');
            num /= 7;
        }
        ret.push_back(num + '0');
        if(minus_v == true) {
            ret.push_back('-');
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};