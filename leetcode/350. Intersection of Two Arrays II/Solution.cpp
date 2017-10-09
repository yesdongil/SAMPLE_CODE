class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> um;
        vector<int> ret;
        for(int i = 0; i < nums1.size(); i++) {
            um[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++) {
            if(um[nums2[i]] > 0) {
                ret.push_back(nums2[i]);
                um[nums2[i]]--;
            }
        }
        return ret;
    }
};