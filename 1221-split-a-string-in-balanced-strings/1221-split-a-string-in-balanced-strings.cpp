class Solution {
public:
    int balancedStringSplit(string s) {
        int res = 0;
        int r, l;
        for(int i = 0; i < int(s.size()); i++)
        {
            r = 0, l = 0;
            do
            {
                if(s[i] == 'R')
                {
                    r++;
                }
                else
                {
                    l++;
                }
                i++;
                //cout << "r : " << r << ", l : " << l << "\n";
            }while(r != l);
            i--;
            res++;
        }
        return res;
    }
};