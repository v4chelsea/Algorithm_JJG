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
        
        ListNode* newList = new ListNode;
        ListNode* answer = newList;
        
        while(list1!=nullptr || list2 != nullptr){
            
            if(list1==nullptr){
                ListNode* tmp = new ListNode(list2->val);
                newList->next = tmp;
                newList = newList->next;
                list2 = list2->next;
            }
            
            else if (list2==nullptr){
                ListNode* tmp = new ListNode(list1->val);
                newList->next = tmp;
                newList = newList->next;
                list1 = list1->next;
            }
            
            else if(list1->val < list2 -> val){
                ListNode* tmp = new ListNode(list1->val);
                newList->next =tmp;
                newList = newList->next;
                list1 = list1->next;
                
            }
            
            else{
                ListNode* tmp = new ListNode(list2->val);
                newList->next = tmp;
                newList = newList->next;
                list2 = list2->next;
            }
        }
        
              
        
        return answer->next;
    }
};




/*
Runtime: 8 ms, faster than 83.00% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 15.1 MB, less than 8.16% of C++ online submissions for Merge Two Sorted Lists.
*/
