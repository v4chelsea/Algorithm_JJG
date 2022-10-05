/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        while(headA) {
            ListNode *cir = headB;
            
            while(cir) {
                if(headA == cir) return headA;
                else {
                    cir = cir->next;
                }
            }
            
            headA = headA->next;
        }
        
        return NULL;
    }
};
