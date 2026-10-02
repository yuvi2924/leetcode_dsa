
class Solution {
public:
    TreeNode* prev = NULL;
    TreeNode* g1first = NULL;
    TreeNode* g1second = NULL;
    TreeNode* g2first = NULL;
    TreeNode* g2second = NULL;
    int galat = 0;

    void fun(TreeNode* root) {
        if (root == NULL)
            return;

        fun(root->left);

        // for prev
        if (prev == NULL)
            prev = root;
        else {
            if (root->val <= prev->val) {
                // galti h
                if (galat == 0) {
                    g1first = prev;
                    g2second = root;
                    galat++;
                } else {
                    g2second = root;
                    g2first = prev;
                    galat++;
                }
            }
            prev = root;
        }
        fun(root->right);
    }
    void recoverTree(TreeNode* root) {
        fun(root);

        if (galat > 0) {
            swap(g1first->val, g2second->val);
        }
        return;
    }
};