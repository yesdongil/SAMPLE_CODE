class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret = 0;
        int cnt = 0, count = 0;
        int alph[128] = {-1, };
        bool ch[128] = {false, };
        
        int len = s.size();
        while(cnt < len) {
            int temp = s[cnt];
            if(ch[temp] == false) {
                ch[temp] = true;
                alph[temp] = cnt;
                count++;
            } else {
                memset(ch, false, 128);
                cnt = alph[temp];
                memset(alph, -1, 128);
                count = 0;
            }
            cnt++;
            ret = max(ret, count);
        }
        ret = max(ret, count);
        return ret;
    }
};