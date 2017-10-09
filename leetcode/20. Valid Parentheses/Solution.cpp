class Solution {
public:
    bool isValid(string s) {
        bool ret = true;
        static const string open ="({[";
        static const string close =")}]";
        
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            size_t pos = open.find(c);
            if(pos != string::npos) {
                st.push(pos);
            } else {
                pos = close.find(c);
                if(pos != string::npos) {
                    if(st.empty() == false) {
                        if(st.top() == pos) {
                            st.pop();
                        } else {
                            ret = false;
                            break;
                        }
                    } else {
                        ret = false;
                        break;
                    }
                }
            }
        }
        if(s.size() > 0 && st.empty() == false) {
            ret = false;
        }
        return ret;
    }
};