class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool res = true;
        int arr[26] = { 0, };
        for(int i = 0; i < int(sentence.size()); i++)
        {
            arr[sentence[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(arr[i] == 0)
            {
                res = false;
                break;
            }
        }
        return res;
    }
};