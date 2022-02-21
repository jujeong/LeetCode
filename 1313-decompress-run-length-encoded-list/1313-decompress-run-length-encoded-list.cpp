class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < int(nums.size()) / 2; i++)
        {
            for(int j = 0; j < nums[i * 2]; j++)
            {
                res.push_back(nums[i * 2 + 1]);
            }
        }
        return res;
    }
};