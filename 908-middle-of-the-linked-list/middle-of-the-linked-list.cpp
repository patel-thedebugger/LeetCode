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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr = head ;
        ListNode* preptr = head;
        while(preptr != NULL && preptr->next  != NULL )
        {
            ptr = ptr->next;
            preptr = preptr->next->next ;
        }
        return ptr ;
    }
};