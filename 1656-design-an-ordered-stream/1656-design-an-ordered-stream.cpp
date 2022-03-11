
class OrderedStream {
public:
    int l = 0;
    int i = 0;
    vector<string> arr;
    OrderedStream(int n) {
        l = n;
    }
    
    vector<string> insert(int idKey, string value) {
        arr.resize(l);
        vector<string> res;
        res.clear();
        arr[idKey - 1] = value;
        while(arr[i] != "")
        {
            res.push_back(arr[i]);
            if(l - 1 <= i)
            {
                break;
            }
            i++;
        }
        return res;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */