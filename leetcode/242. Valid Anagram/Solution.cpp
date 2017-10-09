class Solution {
public:
    bool isAnagram(string s, string t) {
        bool ret = (s.size() == t.size());
        if(ret == true) {
            int count[26] = {0, };
            for(int i = 0; i < s.size(); i++) {
                count[s[i] - 'a']++;
                count[t[i] - 'a']--;
            }
            for(int i = 0; i < 26; i++) {
                if(count[i] != 0) {
                    ret = false;
                    break;
                }
            }
        }
        return ret;
    }
};