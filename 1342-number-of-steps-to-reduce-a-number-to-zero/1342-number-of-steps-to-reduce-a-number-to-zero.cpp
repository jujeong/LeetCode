class Solution {
public:
    int numberOfSteps(int num) {
        int res = 0;
        while(num > 0)
        {   
            if(num == 1)
            {
                res++;
                break;
            }
            if(num % 2 == 1)
            {
                num--;
                res++;
            }
            num /= 2;
            res++;
        }
        return res;
    }
};