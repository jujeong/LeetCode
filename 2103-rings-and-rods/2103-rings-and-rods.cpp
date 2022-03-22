class Solution {
public:
    int countPoints(string rings) {
        int pos;
        int res = 0;
        int arr[10][3] = { 0, };
        for(int i = 0; i < int(rings.size()); i += 2)
        {
            pos = rings[i + 1] - '0';
            switch(rings[i])
            {
                case 'R':
                    arr[pos][0]++;
                    break;
                case 'G':
                    arr[pos][1]++;
                    break;
                case 'B':
                    arr[pos][2]++;
                    break;
            }
        }
        for(int i = 0; i < 10; i++)
        {
            if(arr[i][0] > 0 && arr[i][1] > 0 && arr[i][2] > 0)
            {
                res++;
            }
        }
        return res;
    }
};