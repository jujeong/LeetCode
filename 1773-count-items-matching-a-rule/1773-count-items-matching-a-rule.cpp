class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res = 0;
        int val = -1;
        if(ruleKey == "type")
        {
            val = 0;
        }
        if(ruleKey == "color")
        {
            val = 1;
        }
        if(ruleKey == "name")
        {
            val = 2;
        }
        for(int i = 0; i < int(items.size()); i++)
        {
            if(items[i][val] == ruleValue)
            {
                res++;
            }
        }
        return res;
    }
};