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
void solve(TreeNode * root, int val, int depth)
{
    if(root==NULL)
    return ;
    if(depth==1)
    {
      TreeNode * l=root->left;
      TreeNode * r=root->right;
      root->left=new TreeNode(val);
      root->right=new TreeNode(val);
      root->left->left=l;
      root->right->right=r;
    }
    solve(root->left,val,depth-1);
    solve(root->right,val,depth-1);
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;
        }
        solve(root,val,depth-1);
        return root;
    }
};
