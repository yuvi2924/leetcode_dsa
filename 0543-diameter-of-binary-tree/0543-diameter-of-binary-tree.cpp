class Solution {
public:
  int res=0;
    int check(TreeNode* &root){
     if(root==NULL) return 0;
     int left=check(root->left);
     int right=check(root->right);
     int sum=left+right;
     res=max(res,sum);
     return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
           check(root);
        return res;
    }
};