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
    ListNode* res ;
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2 ;
        else if (list2 == NULL)
            return list1;
        else if(list1->val <= list2->val)
            res = new ListNode(list1->val, mergeTwoLists(list1->next, list2));
        else
            res = new ListNode(list2->val, mergeTwoLists(list1 , list2->next));
        return res ;
            
    }
};