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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *tmp = new ListNode();
        ListNode *result = tmp;
        
        while(list1 && list2) {
            ListNode *tmp1 = new ListNode();
            
           if(list1-> val < list2->val) {
               tmp1->val = list1->val;
               list1 = list1->next;
           } else {
               tmp1->val = list2->val;
               list2 = list2->next;
           }
            
            tmp->next = tmp1;
            tmp = tmp->next;
        }
        
        if(list1) tmp->next = list1;
        else if(list2) tmp->next = list2;
        
        return result->next;
    }
};
