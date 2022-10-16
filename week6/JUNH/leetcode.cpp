class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        
        if(root) q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            
            for(int i=0; i<n; i++) {
                TreeNode *p = q.front();
                q.pop();
                
                TreeNode* p_left = p->left;
                TreeNode* p_right = p->right;
                
                p->left = p_right;
                p->right = p_left;
                
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
            }
        }
        
        return root;
    }
};
