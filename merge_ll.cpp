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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* temp_Node= new ListNode(0);
        ListNode* current_Node = temp_Node;
    
        while((l1 != NULL) && (l2 != NULL))
        {
            if(l1->val < l2->val)
            {current_Node->next = l1;
                l1=l1->next;}
            else
            {current_Node->next = l2;
                l2=l2->next;}
            
            current_Node = current_Node->next;
        }
        
        while(l1!=NULL)
        {       current_Node->next = l1;
                l1=l1->next;
                current_Node = current_Node->next;
        }
        
        while(l2!=NULL)
        {       current_Node->next = l2;
                l2=l2->next;
                current_Node = current_Node->next;
        }
        return temp_Node->next;
        
    }
};