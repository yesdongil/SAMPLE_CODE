class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool ret = false;
        int hit = 0, j = 0;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            for(; j < t.size(); j++) {
                if(c == t[j]) {
                    j++;
                    hit++;
                    break;
                }
            }
        }
        if(hit == s.size()) {
            ret = true;
        }
        return ret;
    }
};