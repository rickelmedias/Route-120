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

// queue<TreeNode*> q;

class Solution
{
public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        calculateDiameter(root, diameter);
        return diameter;
    }

private:
    int calculateDiameter(TreeNode *node, int &diameter)
    {
        if (node == NULL)
            return 0;

        int leftDepth = calculateDiameter(node->left, diameter);
        int rightDepth = calculateDiameter(node->right, diameter);

        diameter = std::max(diameter, leftDepth + rightDepth);
        return std::max(leftDepth, rightDepth) + 1;
    }
};