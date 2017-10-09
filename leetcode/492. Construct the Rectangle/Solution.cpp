class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ret(2);
        int temp = (int)sqrt(area);
        while( (area % temp) != 0) {
            temp--;
        }
        ret[0] = max(temp, area / temp);
        ret[1] = area / ret[0];
        return ret;
    }
};