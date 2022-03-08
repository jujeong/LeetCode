class Solution {
public:
    vector<string> cellsInRange(string s) {
        char alpMin = s[0];
        char alpMax = s[3];
        char numMin = s[1];
        char numMax = s[4];
        string temp;
        vector<string> res;
        
        for(int i = alpMin - 'A'; i <= alpMax - 'A'; i++)
        {
            for(int j = numMin - '0'; j <= numMax - '0'; j++)
            {
                temp = "";
                temp += i + 'A';
                temp += j + '0';
                res.push_back(temp);
            }
        }
        return res;
    }
};