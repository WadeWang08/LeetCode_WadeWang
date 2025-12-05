/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return 0;

        return countFrom(root, (long long)targetSum)
               + pathSum(root->left, targetSum)
               + pathSum(root->right, targetSum);
    }

    int countFrom(TreeNode* root, long long target) {
        if (root == nullptr) return 0;

        int path = 0;
        if(root->val == target) {
            path++;
        }
        path = path + countFrom(root->left, target - root->val)
                    + countFrom(root->right, target - root->val);
        return path;
    }
};