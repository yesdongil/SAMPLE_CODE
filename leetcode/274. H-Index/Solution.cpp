class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ret = 0;
        sort(citations.begin(), citations.end(), greater<int>());
        for(; ret < citations.size(); ret++) {
            if(citations[ret] < ret + 1) {
                break;
            }
        }
        return ret;
    }
};