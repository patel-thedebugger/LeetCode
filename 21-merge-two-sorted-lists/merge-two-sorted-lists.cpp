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
        ListNode* ptr = list1 ;
        ListNode* ptr1 = list2;
        ListNode* res ;
        if(list1 == NULL)
        {
            if(list2 == NULL )
                return list1;
            else 
                return list2 ;
        }
        else if(list2 == NULL)
        {
            if(list1 == NULL )
                return list1;
            else 
                return list1 ;
        }
        else if(list1->val >= list2->val ){
            res = list2;
            ptr1 = ptr1->next ;
            cout<<"list2"<<endl;
        }
        else{
            res = list1;
            ptr = ptr->next ;
            cout<<"lsit1"<<endl;
        }
        ListNode* trav = res ;
        while(ptr != NULL or ptr1 != NULL )
        {
            if(ptr == NULL)
            {
                trav->next = new ListNode(ptr1->val,ptr1->next) ;
                trav = trav->next ;
                ptr1 = NULL ;
            }
            else if(ptr1 == NULL)
            {
                trav->next = new ListNode(ptr->val,ptr->next) ;
                trav = trav->next ;
                ptr = NULL ;
            }
            else if(ptr->val <= ptr1->val)
            {
                trav->next = new ListNode(ptr->val) ;
                trav = trav->next ;
                cout<<ptr->val<<"0 - 1"<<ptr1->val<<endl;
                ptr = ptr->next ;
            }
            else
            {
                trav->next = new ListNode(ptr1->val) ;
                trav = trav->next ;
                cout<<ptr1->val<<"1 - 0"<<ptr->val<<endl;
                ptr1 = ptr1->next ;
            }
        }
        return res ;
    }
};