class Solution {
public:
    string getHint(string secret, string guess) {
        if(secret.size() == 0) string("0A0B");
        string ret;
        int temp = 0;
        vector<int> s(10, 0);
        vector<int> g(10, 0);
        
        for(int i = 0; i < secret.size(); i++) {
            char scrt = secret[i];
            char gss = guess[i];
            
            if(scrt == gss) {
                temp++;
            } else {
                s[(scrt - '0')]++;
                g[(gss - '0')]++;
            }
        }
        ret += to_string(temp);
        ret += 'A';
        temp = 0;
        for(int i = 0; i < 10; i++) {
            temp += min(s[i], g[i]);
        }
        ret += to_string(temp);
        ret += 'B';
        return ret;
    }
};