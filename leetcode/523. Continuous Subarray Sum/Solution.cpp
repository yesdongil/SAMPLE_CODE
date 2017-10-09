class Solution {
public:
    int getMod(int i, int k) {
        if(k > 0) return i % k;
        else return i;
    }
    
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        int kk = abs(k), temp = getMod(nums[0], kk);
        set<int> ts;
        ts.insert(temp);
        int len = nums.size();
        for(int i = 1; i < len; i++) {
            temp += getMod(nums[i], kk);
            temp = getMod(temp, kk);
            if(kk == 0 && temp > 0) {
                return false;
            } else if (kk > 0 && temp == 0) {
                return true;
            } else if(ts.find(temp) == ts.end()) {
                ts.insert(temp);
            } else {
                return true;
            }
        }
        return false;
    }
};