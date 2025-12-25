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
#include <climits>

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxi = root->val;
        int max_lv = 1;
        int cur_lv = 0;
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            int s = 0;
            cur_lv++;
            for(int i = 0; i < n; i++) {
                TreeNode* cur = q.front();
                q.pop();
                s = s + cur->val;

                if(cur->left != nullptr) {
                    q.push(cur->left);
                }
                if(cur->right != nullptr) {
                    q.push(cur->right);
                }
            }
            if (s > maxi) {
                maxi = s;
                max_lv = cur_lv;
            }
        }
        return max_lv;
    }
};