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
    void preorder(TreeNode* node , int& sum , int& count) {
        
        if (node == nullptr) {
            return;
            }
        sum += node->val;
        count++;
        preorder(node->left,sum , count);
        preorder(node->right,sum , count);
}
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*>nodes;
        auto Node = root;
        nodes.push(Node);
        int ans = 0;
        while(!nodes.empty()){
            int sum = 0;
            int count = 0;
            TreeNode* tmp = nodes.front();
            preorder(tmp , sum , count);
            if(sum/count  == tmp->val){
                ans++;
            }
            if(tmp->right != nullptr){nodes.push(tmp->right);}
            if(tmp->left != nullptr){nodes.push(tmp->left);}
            nodes.pop();
        }
        return ans;
    }
};