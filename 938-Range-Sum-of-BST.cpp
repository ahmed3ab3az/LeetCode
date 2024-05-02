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
int sum = 0;

    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans = 0;
        queue<TreeNode*>nodes;
        nodes.push(root);
        while(!nodes.empty()){
            auto tmp = nodes.front();
            nodes.pop();
            if(tmp->val >= low && tmp->val <= high){
                ans+=tmp->val;
            }
             if(tmp->right != nullptr){nodes.push(tmp->right);}
            if(tmp->left != nullptr){nodes.push(tmp->left);}
        }
        return ans;
    }
    
};