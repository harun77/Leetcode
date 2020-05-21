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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return solve(root) != -1;
    }
    
    int solve(TreeNode* h){
        if(!h) return 0;
        
        int a = solve(h->left);
        int b = solve(h->right);
        
        if(a == -1 || b == -1) return -1;
        
        int x = abs(a-b);
        
        if(x < 2) return 1 + max(a, b);
        return -1;
    }
};