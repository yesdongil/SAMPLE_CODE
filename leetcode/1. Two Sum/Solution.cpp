class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> m;
        vector<int> ret(2);
        int len = nums.size();
        for(int i = 0; i < len; i++) {
            m.insert(pair<int, int>(nums[i],i));
        }
        multimap<int, int>::iterator tmp_itr, itr;
        for(itr = m.begin(); itr != m.end(); itr++) {
            int start = itr->first;
            int temp = target - start;
            tmp_itr = m.find(temp);
            if(tmp_itr != m.end()) {
                if(start == temp) {
                    tmp_itr++;
                }
                ret[0] = itr->second;
                ret[1] = tmp_itr->second;
                break;
            }
        }
        return ret;
    }
};