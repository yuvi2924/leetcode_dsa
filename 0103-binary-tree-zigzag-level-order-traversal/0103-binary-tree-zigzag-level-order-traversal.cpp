
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
           vector<vector<int>> res;
                if(root==NULL)
                return res;
              bool leftToRight = true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int lvl=q.size();
            vector<int>tmp;
            while(lvl--){
                TreeNode* t=q.front();
                q.pop();
                tmp.push_back(t->val);
                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
            }
            if (!leftToRight) {
                 reverse(tmp.begin(),tmp.end());
                 }
         res.push_back(tmp);
         
         leftToRight = !leftToRight;
        }
        return res;
    }
};