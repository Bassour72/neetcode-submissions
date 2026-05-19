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
    static int checkHeight(TreeNode* root)
    {
        if (!root)
            return 0;

        int left = checkHeight(root->left);
        int right = checkHeight(root->right);

        // diameter = std::max(diameter, left + right);

        return std::max(left, right) + 1;
    }

public:
    static int maxDepth(TreeNode* root)
    {
        // int diameter = 0;

        

        return checkHeight(root);
    }
};
