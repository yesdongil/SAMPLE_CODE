class Solution {
public:
    bool isHappy(int n) {
        bool ret = false;
        set<int> s;
        if(n > 0) {
            do {
                s.insert(n);
                if(n == 1) {
                    ret = true;
                    break;
                } else {
                    int temp = n;
                    n = 0;
                    while(temp > 0) {
                        int div = temp%10;
                        n += (div*div);
                        temp /= 10;
                    }
                }
            } while(s.find(n) == s.end());
        }
        return ret;
    }
};