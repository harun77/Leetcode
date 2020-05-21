/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return isEqual(root, root);
    }
    
    bool isEqual(TreeNode* head1, TreeNode* head2){
        
        if(head1 && head2){
            bool ret = head1->val == head2->val;
            ret &= isEqual(head1->left, head2->right);
            ret &= isEqual(head1->right, head2->left);
            return ret;
        } else {
            return head1 == NULL && head2 == NULL;
        }
    }
};