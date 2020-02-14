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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* sum =l1;
 
    while(l1->next!=NULL && l2->next!=NULL)
    { l1->val= l1->val +l2->val;
        
         if (l1->val >=10) {
                l1->val -= 10;
               
                l1->next->val += 1;
                }
            
    l1=l1->next;
    l2=l2->next;
    }
    l1->val = l1->val+ l2->val;
    
    if(l2->next!=NULL)
        l1->next= l2->next;
        
        while(l1->val >=10) {
                l1->val -= 10;
                if(l1->next==NULL)
                    l1->next = new ListNode(1);
             else
                l1->next->val += 1;
            l1=l1->next;
                }
        
        
        
        
   
        return sum;
    }
        
        
    
    
};