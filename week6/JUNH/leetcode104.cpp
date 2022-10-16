class Solution {
public:
    int maxDepth(TreeNode* root) {
        /* input : root -> (1, 2, 3, 4, 5, 6) */
        queue<TreeNode*> q;
        /* 
           레벨에 따른 트리를 저장하는 큐 
           1reps : q -> (1)
           2reps : q -> (2, 3)
           3reps : q -> (4, 5, 6)
           ...
        */
      
        int max_depth = 0; /* 반환할 결과 값*/
        
        if(root) q.push(root); /* root가 NULL이 아니면 q에 저장*/
              
        while(!q.empty()) {
            max_depth++; /* max_depth의 값을 하나 증가 */
            
            int n = q.size(); /* 레벨에 따른 큐를 순회하기 위해서 n의 값을 q.size()로 할당 */
            
            for(int i=0; i<n; i++) {
                TreeNode *p = q.front();
                q.pop(); /* p를 q에 저장된 TreeNode를 할당해주고, 참조한 q의 데이터는 삭제 */
                
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right); 
                /* NUll이 아닌 자식 노드를 q에 저장 */
            }
        }
        
        return max_depth;
    }
};
