class Solution {
    static int checkHeight(TreeNode* root) 
    {
        if (!root)
            return (0);

        int left = checkHeight(root->left);
        
        int right = checkHeight(root->right);

        if (left == -1 || right == - 1 ||  std::abs((left - right)) > 1)
            return (-1);

        return (std::max(left, right) + 1);
    }
public:
    static bool isBalanced(TreeNode* root)
    {
        return (checkHeight(root) != -1);
    }
};
