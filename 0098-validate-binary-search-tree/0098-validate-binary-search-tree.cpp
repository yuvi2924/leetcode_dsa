
class Solution {
public:
 vector<int>res;
  void fun(TreeNode* root){

        if(root==NULL) return;
         fun(root->left);
         res.push_back(root->val);
         fun(root->right);
  }
    bool isValidBST(TreeNode* root) {
       fun(root);
    for(int i=0;i<res.size()-1;i++){
        if(res[i]>=res[i+1]){
        return false;}
    }
    return true;
    }
};