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
        
        //ListNode* R1 = reverse(l1);
        //ListNode* R2 = reverse(l2);
        ListNode* ptr1 = l1;
        ListNode* preptr1 = l1;
        ListNode* ptr2 = l2;
        ListNode* preptr2 = l1;
        
        int sum ;
        int carry = 0;
        while( ptr1 != NULL && ptr2 != NULL )
        {
            sum = ptr1->val + ptr2->val + carry;
            carry = sum/10;
            ptr1->val =sum%10;
            ptr2->val =sum%10;
            preptr1 = ptr1 ;
            preptr2 = ptr2 ;
            ptr1 = ptr1->next ;
            ptr2 = ptr2->next ;
        }
        if(ptr1 == NULL)
            {
                while(carry==1)
                {
                    if(ptr2 == NULL)
                    {
                        ptr2 = new ListNode(0,NULL);
                        preptr2->next = ptr2;
                    }
                    sum = ptr2->val + carry ;
                    carry=sum/10;
                    ptr2->val = sum%10;
                    preptr2 = ptr2;
                    ptr2 = ptr2 -> next ;
                    
                }
                return l2;
            }
            else 
            {
                while(carry==1)
                {
                    if(ptr1 == NULL)
                    {
                        ptr1 = new ListNode(0,NULL);
                        preptr1->next = ptr1;
                    }
                    sum = ptr1->val + carry ;
                    carry=sum/10;
                    ptr1->val = sum%10;
                    preptr1 = ptr1 ;
                    ptr1 = ptr1 -> next ;
                    
                }
                return l1;
            }
        
    }
};