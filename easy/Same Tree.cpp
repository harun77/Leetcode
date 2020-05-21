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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p && q){
            bool ret = p->val == q->val;
            ret &= isSameTree(p->left, q->left);
            ret &= isSameTree(p->right, q->right);
            return ret;
        } else {
            return (p == NULL && q == NULL);
        } 
    }
};