class Solution {
public:
    bool isPalindrome(int x) {
        int pal = 0, orig = x;
        while(x > 0) {
            pal *= 10;
            pal += (x % 10);
            x /= 10;
        }
        return (pal == orig);     
    }
};