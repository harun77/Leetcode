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
    int minDepth(TreeNode* root) {
        return solve(root);
    }
    
    int solve(TreeNode* root){
        if(!root) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        
        int a = solve(root->left);
        int b = solve(root->right);
        
        if(a && b) return 1 + min(a, b);
        return 1 + a + b;
    }
};