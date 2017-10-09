class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> under(1);
        vector<int> over(1);
        int bkup_under;
        if(nums.size() <= 2) return false;
        if(nums[0] < nums[1]) {
            under[0] = nums[0];
            over[0] = nums[1];
        } else {
            under[0] = nums[1];
            over[0] = INT_MIN;
        }
        bkup_under = under[0];
        for(int i = 2; i < nums.size(); i++) {
            int num = nums[i];
            for(int j = under.size() - 1; j >= 0 ; j--) {
                if(num > under[j] && num < over[j]) {
                    return true;
                }
            }
            if(num <= under.back()) {
                if(bkup_under > num) {
                    bkup_under = num;
                } else if(bkup_under < num) {
                    over.push_back(num);
                    under.push_back(bkup_under);
                }
            } else if (num > over.back()) {
                over[over.size() - 1] = num;
                under[under.size() - 1] = bkup_under;
            }
        }
        return false;
    }
};