class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int col = nums[0].size();
        int size = nums.size()*col;
        if(size != r*c) return nums;
        vector<vector<int>> ret(r, vector<int>(c));
        
        for(int i = 0; i < size; i++) {
            ret[i/c][i%c] = nums[i/col][i%col];
        }
        return ret;
    }
};