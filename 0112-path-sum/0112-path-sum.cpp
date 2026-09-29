
class Solution {
public:
bool res=false;
    void fun(TreeNode* root, int target,int sum){
        if(root==NULL) return;
        sum+=root->val;
        if(root->left== NULL && root->right==NULL){
                if(sum==target)
                res=true;
                return;
        }
        fun(root->left,target,sum);
         fun(root->right,target,sum);
         return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        fun(root,targetSum,0);
        return res;
    }
};