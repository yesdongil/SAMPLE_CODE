#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare_greater(const pair<int, int> &left, const pair<int, int> &right)
{
    return greater<int>()(left.second, right.second);
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> m;
        vector <int> ret;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            m[nums[i]]++;    
        }
        vector< pair<int,int> > vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), compare_greater);
        for(int i = 0; i < k; i++) {
            ret.push_back(vec[i].first);
        }
        return ret; 
    }
};
