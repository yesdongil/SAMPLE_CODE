class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> ret(1,1);
        vector <int> temp(rowIndex, 1);
        for(int i = 0; i < rowIndex; i++) {
            ret.push_back(accumulate(temp.begin(), temp.end(), 0));
            for(int j = 1; j < temp.size() - 1; j++) {
                temp[j] += temp[j - 1];
            }
            temp.pop_back();
        }
        return ret;        
    }
};