class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = "";
        for(int i = 0; i < int(s.size()); i++)
        {
            for(int j = 0; j < int(s.size()); j++)
            {
                if(indices[j] == i)
                {
                    res += s[j];
                    break;
                }
            }
        }
        return res;
    }
};