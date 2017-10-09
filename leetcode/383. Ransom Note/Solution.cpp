class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ret = true;
        int arr[26] = {0, };
        for(int i = 0; i < ransomNote.size(); i++) {
            arr[ransomNote[i] - 'a']++;
        }        
        for(int i = 0; i < magazine.size(); i++) {
            int &temp = arr[magazine[i] - 'a'];
            if(temp > 0) {
                temp--;
            }
        }
        for(int i = 0; i < 26; i++) {
            if(arr[i] > 0) {
                ret = false;
                break;
            }
        }
        return ret;
    }
};