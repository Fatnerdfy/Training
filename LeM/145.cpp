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
    void poster(TreeNode *p, vector<int>& result) {
        if(p == nullptr) return;
        poster(p->left, result);
        poster(p->right, result);
        result.push_back(p->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        poster(root, result);
        return result;
    }
};

// runtime 3ms
