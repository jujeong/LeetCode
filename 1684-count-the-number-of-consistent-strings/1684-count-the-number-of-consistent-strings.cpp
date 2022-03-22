class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res = 0;
        bool c, v;
        for(int i = 0; i < int(words.size()); i++)
        {
            v = true;
            for(int j = 0; j < int(words[i].size()); j++)
            {
                c = false;
                for(int k = 0; k < int(allowed.size()); k++)
                {
                    c = c || (words[i][j] == allowed[k]);
                }
                v = c && v;
                if(v == false)
                {
                    break;
                }
            }
            if(v == true)
            {
                res++;
            }
        }
        return res;
    }
};