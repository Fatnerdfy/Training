/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(begin(preorder), end(preorder), begin(inorder), end(inorder));
    }

    template<typename inte>
    TreeNode* buildTree(inte pre_first, inte pre_last, inte in_first, inte in_last) {
        if(pre_first == pre_last) return nullptr;
        if(in_first == in_last) return nullptr;

        auto root = new TreeNode(*pre_first);
        auto inRootPos = find(in_first, in_last, *pre_first);

        auto leftsize = inRootPos - in_first;

        root->left = buildTree(next(pre_first), next(pre_first, leftsize + 1), in_first, next(in_first, leftsize));
        root->right = buildTree(next(pre_first, leftsize + 1), pre_last, next(inRootPos), in_last);

        return root;
    }
};
