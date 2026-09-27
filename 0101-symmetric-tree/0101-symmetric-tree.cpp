
class Solution {
    bool fun(TreeNode* &root1,TreeNode* &root2){
   if(root1==NULL && root2==NULL)
   return true;
  if(root1==NULL || root2==NULL) return false;
  
  if(root1->val!=root2->val) return false;
  bool r1=fun(root1->left,root2->right);
 bool r2=fun(root1->right,root2->left);
 if(r1==true && r2==true) 
    return true;
        return false;

    }
public:
    bool isSymmetric(TreeNode* root) {
       return fun(root->left,root->right);
    }
};