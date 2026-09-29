
class Solution {
public:
 TreeNode* ans=NULL;
 void fun(TreeNode*& root, int &k){
    if(root==NULL) return;

    if(root->val==k) {
        ans=root;
    }
    if(root->val>k){
        //left
    fun(root->left,k);
    }
    else
      fun(root->right,k);
    return;
 }

    TreeNode* searchBST(TreeNode* root, int val) {
         fun(root,val);
         return ans;
    }
}; 