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
    void level(TreeNode *p, vector<vector<int>>& result, int depth) {
        if(p == NULL) return;
        if(depth >= result.size()) result.push_back(vector<int>());
        result[depth].push_back(p->val);
        level(p->left, result, depth + 1);
        level(p->right, result, depth + 1);
    }

    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<int>> res;
        level(root, res, 0);
        vector<double> v;
        double sum = 0;
        for(int i = 0; i < res.size(); ++i) {
            for(int j = 0; j < res[i].size(); ++j) {
                sum += res[i][j];
            }
            v.push_back(sum / res[i].size());
            sum = 0;
        }
        return v;
    }
};

// runtime 25ms
