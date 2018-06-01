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
    void travel(TreeNode *root, int level, vector<vector<int>>& result) {
        if(root == nullptr) return;

        if(level > result.size())
            result.push_back(vector<int>());

        result[level - 1].push_back(root->val);
        travel(root->left, level+1, result);
        travel(root->right, level+1, result);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        travel(root, 1, result);
        reverse(result.begin(), result.end());
        return result;
    }
};

// runtime 7ms
