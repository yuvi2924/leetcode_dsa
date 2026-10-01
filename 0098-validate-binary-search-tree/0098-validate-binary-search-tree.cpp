class Solution {
public:
    bool check(TreeNode*& root) {
        if (root == NULL)
            return true;

        queue<pair<TreeNode*, pair<long long, long long>>> q;

        q.push({root, {LLONG_MIN, LLONG_MAX}});

        while (!q.empty()) {

            TreeNode* t = q.front().first;

            long long low = q.front().second.first;
            long long high = q.front().second.second;

            q.pop();

            if (t->val <= low || t->val >= high)
                return false;

            if (t->left != NULL)
                q.push({t->left, {low, t->val}});

            if (t->right != NULL)
                q.push({t->right, {t->val, high}});
        }

        return true;
    }

    bool isValidBST(TreeNode* root) {
        return check(root);
    }
};