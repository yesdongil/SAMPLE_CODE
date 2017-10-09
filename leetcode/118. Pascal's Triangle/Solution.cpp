class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > ret;
        vector<int> temp;
        for(int i=0; i < numRows; i++) {
            if (temp.size() < 2) {
                temp.push_back(1);
            } else {
                vector<int> t = temp;
                temp.push_back(0);
                for(int i=1; i<temp.size(); i++) {
                    temp[i] += t[i-1];
                }
            }
            ret.push_back(temp);
        }
        return ret;
    }
};