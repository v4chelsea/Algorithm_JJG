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
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        
        while(head) {
            a.push_back(head->val);
            
            head=head->next;
        }
        
        ListNode *tmp = new ListNode();
        ListNode *result = tmp;
        
        for(int i=a.size()-1; i>=0; i--) {
            ListNode *add = new ListNode();        
            add->val = a[i];
            
            tmp->next = add;
            tmp = tmp->next;
        }
        
        return result->next;
    }
};
