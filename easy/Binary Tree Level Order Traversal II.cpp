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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ret;
        if(!root) return ret;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(q.size()){
            int sz = q.size();
            vector<int>v;
            
            for(int i = 1; i <= sz; i++){
                TreeNode* now = q.front(); q.pop();
                
                v.push_back(now->val);
                if(now->left) q.push(now->left);
                if(now->right) q.push(now->right);
            }
            ret.push_back(v);
        }
        
        reverse(ret.begin(),ret.end());
        return ret;
    }
};