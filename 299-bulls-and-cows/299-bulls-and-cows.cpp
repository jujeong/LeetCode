class Solution {
public:
    string getHint(string secret, string guess) {
        string res = "";
        int len = secret.size();
        int a = 0, b = 0;
        for(int i = 0; i < len; i++)
        {
            if(secret[i] == guess[i])
            {
                a++;
                secret[i] = 'a';
                guess[i] = 'b';
            }
        }
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                if(secret[i] == guess[j])
                {
                    b++;
                    secret[i] = 'a';
                    guess[j] = 'b';
                    break;
                }
            }
        }
        res += 'B';
        if(b == 0)
        {
            res += '0';
        }
        else
        {
            while(b > 0)
            {
                res += b % 10 + '0';
                b /= 10;
            }
        }
        res += 'A';
        if(a == 0)
        {
            res += '0';
        }
        else
        {
            while(a > 0)
            {
                res += a % 10 + '0';
                a /= 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};