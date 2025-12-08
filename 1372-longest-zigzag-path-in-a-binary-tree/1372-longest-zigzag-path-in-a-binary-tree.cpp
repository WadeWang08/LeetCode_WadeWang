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

    int ans = 0;

    int longestZigZag(TreeNode* root) {
        if (root == nullptr) {return 0;}
        findzigzag(root->left, true, 1);
        findzigzag(root->right, false, 1);

        return ans;
    }

    void findzigzag(TreeNode* root, bool isleft, int len) {
        if(root == nullptr) {return;}
        if (len > ans) {
            ans = len;
        }

        if (isleft) {
            findzigzag(root->right, false, len + 1);
            findzigzag(root->left, true, 1);
        } else {
            findzigzag(root->left, true, len + 1);
            findzigzag(root->right, false, 1);
        }
        return;
    }
};