class Solution {
public:
    string truncateSentence(string s, int k) {
        int c = 0, i = 0;
        string res = "";
        while(c < k)
        {
            if(i == s.size())
            {
                break;
            }
            res += s[i];
            if(s[i] == ' ')
            {
                c++;
            }
            i++;
        }
        if(res.back() == ' ')
        {
            res.pop_back();
        }
        return res;
    }
};