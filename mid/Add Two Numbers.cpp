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

        int x,y,carry,sum;
        carry = 0;
        
        ListNode* ret = new ListNode(0);
        ListNode* temp = ret;
        
        while(l1 || l2){
            x = l1? l1->val : 0;
            y = l2? l2->val : 0;
            
            sum = x+y+carry;
            
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
            
            carry = sum/10;
            
            l1 = l1? l1->next : l1;
            l2 = l2? l2->next : l2;
        }
        
        if(carry){
            temp->next = new ListNode(carry);
            temp = temp->next;
        } 
        temp->next = NULL;
        
        return ret->next;
    }
};