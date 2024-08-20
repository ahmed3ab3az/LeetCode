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
    int maxDepth(TreeNode* Node){
        if(Node == nullptr)return 0;
        int l = maxDepth(Node->left);
        int r = maxDepth(Node->right);
        return  1 + max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) return true;

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        if (std::abs(leftDepth - rightDepth) > 1) return false;

        // Check if both left and right subtrees are balanced
        return isBalanced(root->left) && isBalanced(root->right);
    }
};