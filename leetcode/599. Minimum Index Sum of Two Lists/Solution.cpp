class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> m;
        vector<string> ret;
        int least = list1.size()+list2.size();
        for(int i = 0; i < list1.size(); i++) {
            m[list1[i]] = i;
        }
        for(int i = 0; i < list2.size(); i++) {
            auto itr = m.find(list2[i]);
            if(itr != m.end()) {
                int index = itr->second + i;
                if(least < index) continue;
                if(least > index) {
                    ret.clear();
                }
                ret.push_back(itr->first);
                least = index;
            }
        }
        return ret;        
    }
};