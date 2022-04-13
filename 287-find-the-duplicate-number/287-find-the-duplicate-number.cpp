class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res;
        for(int i = 0; i < int(nums.size()) - 1; i++)
        {
            if(nums[i] == nums[i + 1])
            {
                res = nums[i];
            }
        }
        return res;
    }
};