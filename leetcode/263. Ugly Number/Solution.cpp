class Solution {
public:
    bool isUgly(int num) {
        bool ret = (num >= 1);
        if(ret == true) {
            static const int table[3] = {2, 3, 5};
            for(int i = 0; i < 3; i++) {
                int temp = table[i];
                while( (num % temp) == 0) {
                    num /= temp;
                }
            }
            if(num != 1) {
                ret = false;
            }
        }
        return ret;
    }
};