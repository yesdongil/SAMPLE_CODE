class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = s.size() - 1;
        for(; ret >=0 ; ret--) {
            if(s[ret] != ' ') {
                break;
            }
        }
        int i;
        for(i = ret; i >=0 ; i--) {
            if(s[i] == ' ') {
                break;
            }
        }
        ret -= i;
        return ret;   
    }
};