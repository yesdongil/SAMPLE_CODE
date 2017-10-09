class Solution {
public:
    bool isPalindrome(string s) {
        bool ret = false;
        int i;
        string preproc;
        for(i = 0; i < s.size(); i++) {
            char ch = s[i];
            if(ch >= 'A' && ch <= 'Z') {
                preproc += ch - 'A' + 'a';
            } else if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                preproc += ch;
            }
        }
        int len = preproc.size();
        for(i = 0; i < len/2; i++) {
            if(preproc[i] != preproc[len - i - 1]) {
                break;
            }
        }
        if ((len <= 1) || (len >= 2 && i == len/2)) {
            ret = true;
        }
        return ret;
    }
};