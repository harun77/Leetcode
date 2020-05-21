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
        vector<int>v;
        
        while(l1 && l2){
            if(l1->val <= l2->val){
                v.push_back(l1->val);
                l1 = l1->next;
            }else{
                v.push_back(l2->val);
                l2=l2->next;
            }
        }
        while(l1){
            v.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2){
            v.push_back(l2->val);
            l2 = l2->next;
        }
        
        ListNode* ret = new ListNode(0);
        ListNode* temp = ret;
        
        for(vector<int>::iterator it=v.begin();it!=v.end();it++){
            temp->next = new ListNode(*it);
            temp = temp->next;
        }
        return ret->next;
    }
};