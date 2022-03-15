class Solution {
public:
    int maxDepth(string s) {
        int res = 0;
        int currentVps = 0;
        for(int i = 0; i < int(s.size()); i++)
        {
            if(s[i] == '(')
            {
                currentVps++;
            }
            else if(s[i] == ')')
            {
                currentVps--;
            }
            if(res < currentVps)
            {
                res = currentVps;
            }
        }
        return res;
    }
};