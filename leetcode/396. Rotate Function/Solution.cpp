class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int ret = 0, temp;
        int sum = accumulate(A.begin(), A.end(), 0);
        for(int i = 0; i < A.size(); i++) {
            ret += A[i]*i;
        }
        temp = ret;
        for(int i = A.size() - 1; i > 0; i--) {
            int tmp = A[i];
            temp = temp + (sum - tmp) - tmp*(A.size() - 1);
            ret = max(ret, temp);
        }
        return ret;
    }
};