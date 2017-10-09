class NumArray {
public:
    vector<int> subSum;
    NumArray(vector<int> nums) : subSum(nums.size() + 1, 0) {
        for(int i = 0; i < nums.size(); i++) {
            update(i, nums[i]);
        }
    }
    
    void update(int i, int val) {
        int diff =  val - sumRange(i, i);
        i++;
        while(i < subSum.size()) {
            subSum[i] += diff;
            i += (i & -i);
        }
    }
    
    int getSum(int i)
    {
        int ret = 0;
        i++;
        while (i > 0) {
            ret += subSum[i];
            i &= (i - 1);
        }
        return ret;
    }
    
    int sumRange(int i, int j) {
        return (getSum(j) - getSum(i - 1));
    }
};