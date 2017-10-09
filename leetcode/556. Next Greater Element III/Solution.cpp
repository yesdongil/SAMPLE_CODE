class Solution {
public:
    vector<int> makeDigit(int n) {
        vector<int> digit;
        while(n > 0) {
            digit.push_back(n % 10);
            n /= 10;
        }
        return digit;
    }
    
    int nextGreaterElement(int n) {
        vector<int> digit = makeDigit(n);

        for(int i = 1; i < digit.size(); i++) {
            if(digit[i] < digit[i-1]) {
                if(i > 1) {
                    sort(digit.begin(), digit.begin() + i, greater<int>());
                }
                for(int j = i - 1; j >= 0; j--) {
                    if(digit[i] < digit[j]) {
                        swap(digit[i], digit[j]);
                        break;
                    }
                }
                reverse(digit.begin(), digit.end());
                int ret = digit[0];
                for(int i = 1; i < digit.size(); i++) {
                    ret *= 10;
                    ret += digit[i];
                }
                vector<int> temp = makeDigit(ret);
                reverse(temp.begin(), temp.end());
                if(temp == digit) {
                    return ret;
                } else {
                    return -1;
                }
            }
        }
        return -1;
    }
};