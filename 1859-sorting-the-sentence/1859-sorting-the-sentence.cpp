class Solution {
public:
    string sortSentence(string s) {
        istringstream ss(s);
        string stringBuffer;
        string res = "";
        vector<string> temp;
        while(getline(ss, stringBuffer, ' '))
        {
            temp.push_back(stringBuffer);
        }
        vector<string> arr(int(temp.size()));
        for(int i = 0; i < int(temp.size()); i++)
        {
            arr[temp[i].back() - '0' - 1] = temp[i];
        }
        for(int i = 0; i < int(arr.size()); i++)
        {
            res += arr[i];
            res.erase(res.size() - 1);
            res += " ";
        }
        res.erase(res.size() - 1);
        return res;
    }
};