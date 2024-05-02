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
    int deepestLeavesSum(TreeNode* root) {
      if(root == nullptr){
        return 0;
    }
    queue<TreeNode*>nodes;
    nodes.push(root);
    vector<TreeNode*> lastLevel;
    while(!nodes.empty()){
        int sz = nodes.size();
        vector<TreeNode*>level;
         for (int i = 0; i < sz; ++i) {
            TreeNode* tmp = nodes.front();
            if(tmp->right != nullptr){nodes.push(tmp->right);}
            if(tmp->left != nullptr){nodes.push(tmp->left);}
            nodes.pop();
            level.push_back(tmp);
         }
         lastLevel = level;
    }
    int sz = lastLevel.size();
    int ans=0;
     for (TreeNode* node : lastLevel) {
            ans += node->val;
        }
     return ans;
        
    }
};