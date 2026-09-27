
class Solution {
public:
 bool fun(TreeNode* &root1, TreeNode* &root2){
    //3 condition check both null or not , check root value is not same false,check same for left right with recursion
if(root1==NULL && root2==NULL)
return true;
if(root1==NULL || root2==NULL)
return false;
if(root1->val!=root2->val) return false;

//recursion
bool r1 = fun(root1->left, root2->left);
bool r2 = fun(root1->right, root2->right);

    return r1 && r2;

 }
    bool isSameTree(TreeNode* p, TreeNode* q) {
      return fun(p,q);
    }
};