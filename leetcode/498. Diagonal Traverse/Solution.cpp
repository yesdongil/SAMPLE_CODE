class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> ret;        
        int r = matrix.size();
        if(r > 0) {
            int c = matrix[0].size();
            int c_idx = 0, r_idx = 0, cnt = 0;
            bool down = false;
            while(cnt < c*r) {
                ret.push_back(matrix[r_idx][c_idx]);
                cnt++;
                if(down == true) {
                    if(r_idx < r - 1) {
                        r_idx++;
                    } else {
                        c_idx++;
                        down = false;
                        continue;
                    }
                    if(c_idx > 0) {
                        c_idx--;
                    } else {
                        down = false;
                    }
    
                } else {
                    if(c_idx < c - 1) {
                        c_idx++;
                    } else {
                        r_idx++;
                        down = true;
                        continue;
                    }
                    if(r_idx > 0) {
                        r_idx--;
                    } else {
                        down = true;
                    }
                }
            }
        }
        return ret;
    }
};