class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res(int(nums.size()));
        for(int i = 0; i < int(nums.size()); i++)
        {
            for(int j = 0; j < int(nums.size()); j++)
            {
                if(nums[i] > nums[j])
                {
                    res[i]++;
                }
            }
        }
        return res;
    }
};