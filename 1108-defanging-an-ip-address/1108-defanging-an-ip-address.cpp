class Solution {
public:
    string defangIPaddr(string address) {
        for(int i = 0; i < address.size(); i++)
        {
            if(address[i] == '.')
            {
                address.insert(i, "[");
                i += 2;
                address.insert(i, "]");
            }
        }
        return address;
    }
};