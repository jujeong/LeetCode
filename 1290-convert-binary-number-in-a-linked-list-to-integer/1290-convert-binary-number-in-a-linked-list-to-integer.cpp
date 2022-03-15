/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> arr;
    int c = 1;
    int res = 0;
    int getDecimalValue(ListNode* head) {
        
        if(head == NULL)
        {
            reverse(arr.begin(), arr.end());
            for(int i = 0; i < int(arr.size()); i++)
            {
                //cout << arr[i] << " ";
                res += c * arr[i];
                c *= 2;
            }
            return 0;
        }
        arr.push_back(head->val);
        getDecimalValue(head->next);
        return res;
    }
};