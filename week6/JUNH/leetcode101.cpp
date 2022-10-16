class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        
        if(root) q.push(root);
        
        while(!q.empty()) {
            int n = q.size();
            vector<int> cmp;
            
            for(int i=0; i<n; i++) {
                TreeNode* p = q.front();
                q.pop();
                
                if(p->left) {
                    q.push(p->left);
                    cmp.push_back(p->left->val);
                } else {
                    cmp.push_back(-101);
                }
                
                if(p->right) {
                     q.push(p->right);
                    cmp.push_back(p->right->val);
                } else {
                    cmp.push_back(-101);
                }
            }
            
            if(cmp.size() % 2 == 0) {
                for(int i=0; i<cmp.size() - 1; i++) {
                    if(cmp[i] != cmp[cmp.size()-1-i]) return false;
                }
            } else {
                return false;
            }
        }
        
        return true;
    }
};
