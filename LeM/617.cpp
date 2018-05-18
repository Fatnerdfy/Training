class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* t = new TreeNode(0);
        if(t1 != NULL && t2 != NULL) {
            t->val = t1->val + t2->val;
            t->left = mergeTrees(t1->left, t2->left);
            t->right = mergeTrees(t1->right, t2->right);
        }
        else if(t1 == NULL)
            t = t2;
        else if(t2 == NULL)
            t = t1;
        else
            return NULL;
        return t;
    }
};

// runtime 47ms
