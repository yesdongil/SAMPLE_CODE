class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int ret = 0;
        for(auto itr = m.begin(); itr != m.end(); ++itr) {
            auto next_itr = itr;
            next_itr++;
            if((next_itr)->first == (itr->first + 1)) {
                ret = max(ret, (next_itr)->second + itr->second);
            }
        }
        return ret;
    }
};