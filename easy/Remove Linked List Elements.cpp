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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ret = new ListNode(0);
        ListNode* now = ret;
        
        while(head){
            if(head->val != val){
                now->next = new ListNode(head->val);
                now = now->next;
            }
            head = head->next;
        }
        return ret->next;
    }
};