class Solution {
public:
    string reverseVowels(string s) {
        int len = s.size() - 1;
        int front = -1, end = -1, fidx = 0;
        string const vowels = "aeiouAEIOU";
        while(fidx < len) {
            size_t temp;
            if(front == -1) {
                temp= vowels.find(s[fidx]); 
                if(temp != string::npos) {
                    front = fidx;
                } else {
                    fidx++;
                }
            }
            if(end == -1) {
                temp = vowels.find(s[len]);
                if(temp != string::npos) {
                    end = len;
                } else {
                    len--;
                }
            }
            if(front >= 0 && end >= 0) {
                char temp = s[front];
                s[front] = s[end];
                s[end] = temp;
                front = -1;
                end = -1;
                fidx++;
                len--;
            }
        }
        return s;
    }
};