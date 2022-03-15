class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        int length = int(arr.size());
        if(int(arr.size() % 2 == 0))
        {
            length -= 1;
        }
        //cout << "length : " << length << "\n";
        while(length > 0)
        {
            for(int i = 0; i < int(arr.size()) - length + 1; i++)
            {
                for(int j = i; j <= i + length - 1; j++)
                {
                    res += arr[j];
                    //cout << arr[j] << " ";
                }
                //cout << "\n";
            }
            length -= 2;
            
        }
        return res;
    }
};