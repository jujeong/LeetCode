class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int res = 0;
        for(int i = 0; i < int(nums.size()) - 1; i++)
        {
            for(int j = i; j < int(nums.size()); j++)
            {
                if(abs(nums[i] - nums[j]) == k)
                {
                    res++;
                }
            }
        }
        return res;
    }
};