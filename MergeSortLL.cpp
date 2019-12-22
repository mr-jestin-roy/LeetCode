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
    ListNode* sortList(ListNode* head) {
        
        return MergeSort(head);
        
    }
    ListNode* MergeSort(ListNode* head)
    {
        ListNode *prev,*slow,*fast,*l,*r,*adv;
        if(head ==NULL || head->next ==NULL) return head;
        slow= head;
        prev=slow;
    
        fast=head->next;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next; 
        }
        adv= slow->next;
        slow->next = NULL;
        l=MergeSort(prev);
        r=MergeSort(adv);
         ListNode *result = new ListNode(0);
        ListNode *sort = result;
        while(l!=NULL && r !=NULL)
        {
            if(l->val >r->val)
                {
                    result->next = r;
                    r = r->next;}
            else if (l->val<=r->val)
            {
                
                    result->next = l;
                    l= l->next;
            }
            
                    result = result->next;
               
        }
        if(l!=NULL)
            result->next=l;
             
        if(r!=NULL)
            result->next=r;
            return sort->next;
        
    }
    
    
};