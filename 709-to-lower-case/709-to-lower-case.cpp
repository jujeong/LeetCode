class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < int(s.size()); i++)
        {
            if(s[i] >= 65 && s[i] < 91)
            {
                s[i] += 'a' - 'A';
            }
        }
        return s;
    }
};