/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        
        int dep = 0;
        
        q.push(root);
        
        
        while(!q.empty()){
            int n = q.size();
            
            dep++;
            for(int i=0; i<n; i++){
                
                
                TreeNode* p =q.front();q.pop();
                
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
        }
        return dep;
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return !root ? 0 : max(1+maxDepth(root->right), 1+maxDepth(root->left));
    }
};