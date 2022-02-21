class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;
        int res;
        for(int i = 0; i < 4; i++)
        {
            arr.push_back(num % 10);
            num /= 10;
        }
        sort(arr.begin(), arr.end());
        res = arr[3] + arr[2] + 10 * (arr[1] + arr[0]);
        return res;
    }
};