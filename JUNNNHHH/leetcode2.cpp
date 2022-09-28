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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp = new ListNode();
        ListNode *result = tmp;
        int plus = 0;
        
        while(l1 || l2) {
            ListNode *cal = new ListNode();
            int sum = plus;
            
            if(l1 && l2) {
                sum += l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            } else if(l1) {
                sum += l1->val;
                l1 = l1->next;
            } else if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            if(sum >= 10) {
                sum -= 10;
                plus = 1;
            } else plus = 0;
            
            cal->val = sum;
            tmp->next = cal;
            tmp = tmp->next;
        }
        
        if(plus==1) {
            tmp->next = new ListNode();
            tmp->next->val = 1;
        }
        
        return result->next;
    }
};
