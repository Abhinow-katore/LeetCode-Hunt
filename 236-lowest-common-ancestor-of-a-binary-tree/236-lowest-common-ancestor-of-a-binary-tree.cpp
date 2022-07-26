// PENDING
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p, q);
    }

    TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == nullptr) return nullptr;
        TreeNode* it1 = dfs(root->left, p,q);
        TreeNode* it2 = dfs(root->right, p,q);
        if((it1 && it2) || root == p || root == q)
            return root;
        else if (it1 || it2)
            return it1 ? it1 : it2;
        return nullptr;
    }
};