class Solution {
public:
    string interpret(string command) {
        string res = "";
        for(int i = 0; i < int(command.size()); i++)
        {
            if(command[i] == 'G')
            {
                res += "G";
            }
            else
            {
                if(command[i + 1] == ')')
                {
                    res += "o";
                    i++;
                }
                else
                {
                    res += "al";
                    i += 3;
                }
            }
        }
        return res;
    }
};