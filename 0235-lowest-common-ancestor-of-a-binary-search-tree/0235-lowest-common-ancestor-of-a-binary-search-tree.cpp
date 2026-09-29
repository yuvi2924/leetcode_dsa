class Solution {
public:
TreeNode* ans=NULL;
void fun(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == NULL)
            return;

        // Both p and q are greater than root
        if (root->val < p->val && root->val < q->val) {
            fun(root->right, p, q);
        }

        // Both p and q are smaller than root
        else if (root->val > p->val && root->val > q->val) {
            fun(root->left, p, q);
        }

        // Otherwise, root is the LCA
        else {
            ans = root;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fun(root,p,q);
        return ans;
    }
};