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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1, path2;
        findPath(root, p, path1);
        findPath(root, q, path2);
        int i = 0;
        while (i < path1.size() && i < path2.size() && path1[i] == path2[i]) {
            i++;
        }
        return path1[i-1];
    }

    bool findPath(TreeNode* curr, TreeNode* target, vector<TreeNode*>& path) {
        if (curr == nullptr) {
            return false;
        }

        path.push_back(curr);

        if (curr == target) {
            return true;
        }

        if (findPath(curr->left, target, path) || findPath(curr->right, target, path)) {
            return true;
        } else {
            path.pop_back();
        }
        return false;
    }

};