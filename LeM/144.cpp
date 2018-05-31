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
    void preorder(TreeNode *p, vector<int>& result) {
        if(p == nullptr) return;
        result.push_back(p->val);
        preorder(p->left, result);
        preorder(p->right, result);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }
};

//runtime 4ms

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<const TreeNode *> s;
        if(root != nullptr) s.push(root);
        while(!s.empty()) {
            const TreeNode *p = s.top();
            s.pop();
            result.push_back(p->val);
            if(p->right != nullptr) s.push(p->right);
            if(p->left != nullptr) s.push(p->left);
        }
        return result;
    }
};

// runtime 3ms
