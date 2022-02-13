class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int val = 0;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++)
        {
            val += nums[i];
            res.push_back(val);
        }
        return res;
    }
};