class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        int temp = 0;
        for(int i = 0; i < sentences.size(); i++)
        {
            temp = 1;
            for(int j = 0; j < sentences[i].size(); j++)
            {
                if(isspace(sentences[i][j]) != false)
                {
                    temp++;
                }
            }
            if(temp > res)
            {
                res = temp;
            }
        }
        return res;
    }
};